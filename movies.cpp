#include <iostream>
#include "movies.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the cpp file for the movies child class
 */

//Creating and setting movies variables
movies::movies(char*t, int y, char* di, int d, int r):media(t,y){
  director = new char[80];
  strcpy(director, di);
  duration=d;
  rating=r;
}

//Movies destructor
movies::~movies(){
  delete[] director;
}

//Get director
char* movies::getDirector(){
  return director;
}

//Get duration
int movies::getDuration(){
  return duration;
}

//Get Rating
int movies::getRating(){
  return rating;
}

//Prints media type and all 5 components
void movies::printStuff(){
  cout << "Media Type: Movie" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << endl;
  cout << "Rating: " <<	rating << endl;
}
