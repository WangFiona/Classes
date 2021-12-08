#include <iostream>
#include "music.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the cpp file for the music child class
 */

//Creating and setting music variables
music::music(char*t, int y, char* a, int d, char* p):media(t,y){
  artist = new char[80];
  strcpy(artist, a);
  publisher = new char[80];
  strcpy(publisher, p);
  duration=d;
}

//Music destructor
music::~music(){
  delete[] artist;
  delete[] publisher;
}

//Get Artist
char* music::getArtist(){
  return artist;
}

//Get Duration
void music::setDuration(int newD){
  duration=newD;
}

//Get duration
int music::getDuration(){
  return duration;
}

//Get publisher
char* music::getPublisher(){
  return publisher;
}

//Prints media type and 5 components
void music::printStuff(){
  cout << "Media Type: Music" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Duration: " << duration << endl;
  cout << "Publisher: " << publisher << endl;
}
