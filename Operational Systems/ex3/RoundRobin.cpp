// Participantes:
// Aloísio Marques Lingo Filho
// Guilherme de Souza Dinisio Rosseti
// Samuel Oliveira Lopes

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
// #include<windows.h>
#include <unistd.h>
using namespace std;
class Process {
public:
  string state;
  int time;
  vector<char> instructions;
  int executionTime;

  Process(int time, vector<char> instructions);
};
inline Process::Process(int time, vector<char> instructions) {
  this->state = "new";
  this->time = time;
  this->instructions = instructions;
  this->executionTime = 0;
}

int main() {
  unordered_map<char, int> instructionsTime = {
      {'A', 5}, {'B', 7}, {'C', 9}, {'D', 10}};

  vector<Process> processList;
  vector<Process> scheduler;

  string process;
  ifstream processes("processos.txt");
  for (int i = 0; i < 4; i++) {
    getline(processes, process);
    int time = stoi(process);
    vector<char> instructions;
    for (int j = 3; j < process.length(); j++) {
      instructions.push_back(process[j]);
    }
    Process processTemp(time, instructions);
    processList.push_back(processTemp);
  }

  processes.close();

  double quantum = 5;
  int globalTime = 0;
  int instTime = 0;
  int processCount = 0;
  int processAmount = processList.size();

  while (processCount < processAmount) {
    globalTime++;
    cout << ".";
    for (int i = 0; i < processList.size(); i++) {
      if (processList[i].time == globalTime) {
        scheduler.push_back(processList[i]);
        scheduler.back().state = "ready";
        cout << endl
             << "Processo " << scheduler.back().time << " pronto" << endl;
        processList.erase(processList.begin() + i);
      }
    }

    if (scheduler.size() > 0) {
      if (scheduler[0].state == "ready") {
        cout << endl
             << "Instrucao " << scheduler[0].time << ":"
             << scheduler[0].instructions[0] << " iniciada" << endl;
        scheduler[0].state = "running";
      }
      quantum++;
      instTime++;
      if (instTime == instructionsTime.at(scheduler[0].instructions[0])) {
        scheduler[0].executionTime += instTime;
        instTime = 0;
        cout << endl
             << "Instrucao " << scheduler[0].time << ":"
             << scheduler[0].instructions[0] << " terminada" << endl;
        scheduler[0].instructions.erase(scheduler[0].instructions.begin());
        if (scheduler[0].instructions.size() == 0) {
          scheduler[0].state = "terminated";
          cout << endl
               << "Processo " << scheduler[0].time << " finalizado (tempo de execucao: )" << scheduler[0].executionTime << endl;
          scheduler.erase(scheduler.begin());
          processCount++;
        } else if (quantum >= 5) {
          quantum = 0;
          scheduler[0].state = "ready";
          rotate(scheduler.begin(), scheduler.begin() + 1, scheduler.end());
        }
      }
    }
    sleep(1 * 0.5);
  }
}
