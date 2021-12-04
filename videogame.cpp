#include <iostream>
#include "videogame.h"

using namespace std;

videogame::videogame(char*t, int y, char*p, int r):media(t,y){
  publisher = new char[80];
  strcpy(publisher, p);
  rating = r;
}

videogame::~videogame(){
  delete[] publisher;
}

char* videogame::getPublisher(){
  return publisher;
}

int videogame::getRating(){
  return rating;
}

void videogame::printStuff(){
  cout << "Media Type: Videogame" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}
