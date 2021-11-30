#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void add();
void search();
void delet();

int main() {
  //Initialize the variables
  bool running = true;
  char command[7];
  char ADD[] = {'A', 'D', 'D', '\0'};
  char SEARCH[] = {'S', 'E', 'A', 'R', 'C', 'H', '\0'};
  char DELETE[] = {'D', 'E', 'L', 'E', 'T', 'E', '\0'};
  char QUIT[] = {'Q', 'U', 'I', 'T', '\0'};

  //Ask the user for a command
  cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;

  while (running == true) {
    cin.get(command,7);
    cin.get();

    //Allow both upper and lower case
    for(int i=0; i < strlen(command); i++) {
      command[i] = toupper(command[i]);
    }

    //Determine which command the user input
    if (strcmp(command, ADD)==false) {
      add();
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, SEARCH)==false) {
      search();
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, DELETE)==false) {
      delet();
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, QUIT)==false) {
      running = false;
    } else {
      cout << "Please enter a valid command:" << endl;
    }
  }
  return 0;
}

//Method for adding students
void add(){
  cout << "command: add" << endl;
}

//Method for searching in the database
void search(){
  cout << "command: search" << endl;
}

//Method for deleting students
void delet(){
  cout << "command: delete" << endl;
}

