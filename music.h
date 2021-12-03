#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class music: public media {
 public:
  music(char* t, int y, char* a, int d, char* p);
  ~music();                                         

  char* artist;
  virtual char* getArtist();
  int duration;
  virtual void setDuration(int newD);
  virtual int getDuration();
  char* publisher;
  virtual char* getPublisher();
  virtual void printStuff();
};
#endif
