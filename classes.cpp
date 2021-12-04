#include <iostream>
#include <vector>
#include <iterator>
#include <cstring>
#include "videogame.h"
#include "music.h"
#include "movies.h"
using namespace std;

/*
 Author: Fiona Wang
 Date: Dec. 3rd, 2021
 This program allows the user to store different types of media into a database. 
 The media types are videogame, movie, and music.
 */

//Initialize the methods
void add(int &x, vector<media*> &database);
void search(vector<media*> &database);
void delet(vector<media*> &database);

int main() {
  //Initialize the variables
  vector<media*> database;
  int x=0;
  bool running = true;
  char command[7];
  char ADD[] ="ADD";
  char SEARCH[] = "SEARCH";
  char DELETE[] = "DELETE";
  char QUIT[] = "QUIT";

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
      add(x, database);
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, SEARCH)==false) {
      search(database);
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, DELETE)==false) {
      delet(database);
      cout << "Enter a command (ADD, SEARCH, DELETE, or QUIT):" << endl;
    } else if (strcmp(command, QUIT)==false) {
      running = false;
    } else {
      cout << "Please enter a valid command:" << endl;
    }
  }
  return 0;
}

//Method for adding to the database
void add(int &x, vector<media*> &database){
  //Ask the user what mediat type they want to add
  cout << "What media type would you like to add? (videogame, music, or movie with no 's' or space)" << endl;
  char vg[]="videogame";
  char mu[]="music";
  char mo[]="movie";
  char mt[20];
  cin.get(mt, 20);
  cin.get();
  
  //Allow both upper and lower case
  for(int i=0; i < strlen(mt); i++) {
      mt[i] = tolower(mt[i]);
  }

  bool match=false;
  while(match==false){
    //Determine which media type the user input
    if (strcmp(mt,vg)==false) { //Videogame
      char* t = new char[80];
      int y;
      char* p = new char[80];
      int r;

      //Ask for all videogame information
      cout << "Enter the title:" << endl;
      cin.get(t,80);
      cin.get();
      cout << "Enter the year:" << endl;
      cin>> y;
      cin.get();
      cout << "Enter the publisher:" << endl;
      cin.get(p,80);
      cin.get();
      cout << "Enter the rating:" << endl;
      cin >> r;
      cin.get();

      //Add the user's input into the database
      videogame* newVg = new videogame(t,y,p,r);
      database.push_back(newVg);
      x++;
      return;
      match=true;
      
    } else if (strcmp(mt, mu)==false) { //Music
      char* t = new char[80];
      int y;
      char* a = new char[80];
      int d;
      char* p = new char[80];

      //Ask for all music information
      cout << "Enter the title:" << endl;
      cin.get(t,80);
      cin.get();
      cout << "Enter the year:" << endl;
      cin>> y;
      cin.get();
      cout << "Enter the artist:" << endl;
      cin.get(a, 80);
      cin.get();
      cout << "Enter the duration:" << endl;
      cin >> d;
      cin.get();
      cout << "Enter the publisher:" << endl;
      cin.get(p,80);
      cin.get();

      //Add the user's input into the database
      music* newMu = new music(t,y,a,d,p);
      database.push_back(newMu);
      x++;
      return;
      match=true;
      
    } else if (strcmp(mt, mo)==false) { //Movie
      char* t = new char[80];
      int y;
      char* di = new char[80];
      int d;
      int r;

      //Ask for all movie information
      cout << "Enter the title:" << endl;
      cin.get(t,80);
      cin.get();
      cout << "Enter the year:" << endl;
      cin>> y;
      cin.get();
      cout << "Enter the director:" << endl;
      cin.get(di, 80);
      cin.get();
      cout << "Enter the duration:" << endl;
      cin >> d;
      cin.get();
      cout << "Enter the rating:" << endl;
      cin >> r;
      cin.get();

      //Add the user's input into the database 
      movies* newMo = new movies(t,y,di,d,r);
      database.push_back(newMo);
      x++;
      return;
      match=true;
      
    } else {
      cout << "Please enter a valid media type:" << endl;
      cin.get(mt,20);
      cin.get();
    }
  }
}

//Method for searching in the database
void search(vector<media*> &database){
  //Check if there is anything in the database
  if(database.size()==0){
    cout << "The database is empty" << endl;
    return;
  }
  int target=0;
  bool found=false;
  cout << "Are you searching for a title or year (t or y)" << endl;
  char t='t';
  char isY='y';
  char which;
  bool isYear=false;
  cin >> which;
  cin.get();
  if(which==t){
    cout << "Enter a title:" << endl;
  } else if(which==isY){
    cout << "Enter a year:" << endl;
    isYear=true;
  } else {
    cout << "You did not enter a title or year" << endl;
    return;
  }
  char* ty = new char[80];
  cin.get(ty, 80);
  cin.get();
  int y=0;
  if(isYear==true){
   y=atoi(ty);
  }

  //While something has not been found
  while(found==false){
    //Go through the database to see what matches the user's input
    for(int i=0; i<database.size(); i++){
      if((isYear==false && (strcmp(ty, database[i]->getTitle())==false) || (isYear==true && y==database[i]->getYear()))){
	database[i]->printStuff();
	found=true;
      }
    }
    //If the user input cannot be found in the database
    if(found==false){
      cout << "The title/year could not be found. Please enter a valid search:" << endl;
      cin.get(ty,80);
      cin.get();
    }
  }
}

//Method for deleting things from the database
void delet(vector<media*> &database){
  //Check if there is anything in the database                                                                             
  if(database.size()==0){
    cout << "The database is empty" << endl;
    return;
  }
  int target=0;
  bool found=false;
  cout << "Are you searching for a title or year (t or y)" << endl;
  char t='t';
  char isY='y';
  char which;
  bool isYear=false;
  cin >> which;
  cin.get();
  if(which==t){
    cout << "Enter a title:" << endl;
  } else if(which==isY){
    cout << "Enter a year:" << endl;
    isYear=true;
  } else {
    cout << "You did not enter a title or year" << endl;
    return;
  }
  char* ty = new char[80];
  cin.get(ty, 80);
  cin.get();
  int y=0;
  if(isYear==true){
   y=atoi(ty);
  }

  //While something has not been found
  while(found==false){
    vector<media*>::iterator i;
    media* ptr;
    char yn = 'y';
    char check;
    //Go through the database to see what matches the user's input
    for(i=database.begin(); i<database.end();){
      ptr=*i;
      if((isYear==false && strcmp(ty, ptr->getTitle())==false) || (isYear==true && y==ptr->getYear())){
	//Confirm that the user would like to delete
	cout << "Are you sure you want to delete the following (y or n)" << endl;
	ptr->printStuff();
	cin >> check;
	cin.get();

	//Delete the item
	if(yn==check){
	  database.erase(i);
	  delete ptr;
	  cout << ty << " has been deleted" << endl;
	}else{
	  i++;
	}
	found=true;
      }else{
	i++;
      }
    }
    
    //If nothing matches the user's input
    if(found==false){
      cout << "The title/year could not be found. Please enter a valid search:" << endl;
      cin.get(ty,80);
      cin.get();
    }
  }
}
