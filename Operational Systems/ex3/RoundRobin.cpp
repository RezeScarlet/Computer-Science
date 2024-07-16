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

  Process(int time, vector<char> instructions);
};
inline Process::Process(int time, vector<char> instructions) {
  this->state = "waiting";
  this->time = time;
  this->instructions = instructions;
}
int main() {
  unordered_map<string, int> instructionsTime = {
      {"A", 5}, {"B", 7}, {"C", 9}, {"D", 10}};
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

    // cout << "time: " << scheduler[i].time << endl;
    // cout << "instructions: ";
    // for (char c : scheduler[i].instructions) {
    //   cout << c;
    // }
  }

  processes.close();

  double timeMod = 0.5;
  double quantum = 5 * timeMod;
  int globalTime = 0;

  while (scheduler.size()) {
    globalTime++;
    for (int i = 0; i < processList.size(); i++) {
      if (processList[i].time == globalTime) {
        scheduler.push_back(processList[i]);
        processList.erase(processList.begin() + i);
      }
    }
    
    sleep(1 * timeMod);
  }
}
