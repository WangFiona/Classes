#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the header file for the videogame child class
 */

class videogame: public media {
 public:
  videogame(char* t, int y, char* p, int r);
  ~videogame(); //Destructor

  char* publisher;
  virtual char* getPublisher();
  int rating;
  virtual int getRating();
  virtual void printStuff(); //Prints all 4 components
};
#endif
