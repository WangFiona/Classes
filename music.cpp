#include <iostream>
#include "music.h"

using namespace std;

music::music(char*t, int y, char* a, int d, char* p):media(t,y){
  artist = new char[80];
  strcpy(artist, a);
  publisher = new char[80];
  strcpy(publisher, p);
  duration=d;
}

music::~music(){
  delete[] artist;
  delete[] title;
  delete[] publisher;
}

char* music::getArtist(){
  return artist;
}

void music::setDuration(int newD){
  duration=newD;
}

int music::getDuration(){
  return duration;
}

char* music::getPublisher(){
  return publisher;
}

void music::printStuff(){
  cout << "Media Type: Music" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Duration: " << duration << endl;
  cout << "Publisher: " << publisher << endl;
}
