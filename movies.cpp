#include <iostream>
#include "movies.h"

using namespace std;

movies::movies(char*t, int y, char* di, int d, int r):media(t,y){
  director = new char[80];
  strcpy(director, di);
  duration=d;
  rating=r;
}

movies::~movies(){
  delete[] director;
}

char* movies::getDirector(){
  return director;
}

int movies::getDuration(){
  return duration;
}

int movies::getRating(){
  return rating;
}

void movies::printStuff(){
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << endl;
  cout << "Rating: " <<	rating << endl;
}