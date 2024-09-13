#include <chrono>
#include <fstream>
#include <iostream>
#include <mutex>
#include <random>
#include <thread>

std::mutex file_mutex;

void writeToFile(int thread_id) {
  int write_count = 0;

  while (write_count < 10) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(5, 10);
    int wait_time = dis(gen);

    std::this_thread::sleep_for(std::chrono::seconds(wait_time));

    if (file_mutex.try_lock()) {
      std::cout << "Thread " << thread_id << " abriu o arquivo" << std::endl;
      std::ofstream file("secaocritica.txt", std::ios::app);

      if (file.is_open()) {
        file << "Thread " << thread_id << ": Primeira linha escrita\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));

        file << "Thread " << thread_id << ": Segunda linha escrita\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));

        file << "Thread " << thread_id
             << ": Terceira linha escrita (Fechar Arquivo)\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "Thread " << thread_id << " escreveu em arquivo"
                  << std::endl;
      }

      file.close();
      file_mutex.unlock();
      std::cout << "Thread " << thread_id << " fechou o arquivo" << std::endl;

      write_count++;
    } else {
      std::cout << "Thread " << thread_id
                << " tentou acessar o arquivo sem sucesso" << std::endl;
    }
  }
}

int main() {
  std::thread t1(writeToFile, 1);
  std::thread t2(writeToFile, 2);
  std::thread t3(writeToFile, 3);

  t1.join();
  t2.join();
  t3.join();

  return 0;
}
