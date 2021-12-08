#include <iostream>
#include "videogame.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the cpp file for the videogame child class
 */

//Creating and setting videogame variables
videogame::videogame(char*t, int y, char*p, int r):media(t,y){
  publisher = new char[80];
  strcpy(publisher, p);
  rating = r;
}

//Videogame destructor
videogame::~videogame(){
  delete[] publisher;
}

//Get publisher
char* videogame::getPublisher(){
  return publisher;
}

//Get rating
int videogame::getRating(){
  return rating;
}

//Prints media type and 4 components
void videogame::printStuff(){
  cout << "Media Type: Videogame" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}
