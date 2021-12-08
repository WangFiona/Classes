#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the header file for the music child class
 */

class music: public media {
 public:
  music(char* t, int y, char* a, int d, char* p);
  ~music(); //Destructor

  //Initializing variables and declaring functions for music child class
  char* artist;
  virtual char* getArtist();
  int duration;
  virtual void setDuration(int newD);
  virtual int getDuration();
  char* publisher;
  virtual char* getPublisher();
  virtual void printStuff(); //Prints all 5 components
};
#endif
