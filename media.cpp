#include <iostream>
#include "media.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the cpp file for the media parent class
 */

media::media(){
  title = new char[80];
}

//Creating and setting media variables
media::media(char* t, int y){
  title = new char[80];
  strcpy(title, t);
  year = y;
}

//Media destructor
media::~media(){
  delete[] title;
}

//Get title
char* media::getTitle(){
  return title;
}

//Get year
int media::getYear(){
  return year;
}

//Prints the title and year
void media::printStuff(){
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
}
