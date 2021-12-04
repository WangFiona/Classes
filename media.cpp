#include <iostream>
#include "media.h"

using namespace std;

media::media(){
  title = new char[80];
}

media::media(char* t, int y){
  title = new char[80];
  strcpy(title, t);
  year = y;
}

media::~media(){
  cout << "media delete" << endl;
  delete[] title;
}

char* media::getTitle(){
  return title;
}

int media::getYear(){
  return year;
}

void media::printStuff(){
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
}
