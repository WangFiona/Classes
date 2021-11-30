#include <iostream>
#include "videogame.h"

using namespace std;

videogame::videogame(char*t, int y, char*p, int r):media(t,y){
  publisher = new char[80];
  strcpy(publisher, p);
  rating = r;
}

char* videogame::getPublisher(){
  return publisher;
}

int videogame::getRating(){
  return rating;
}
