#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class movies: public media {
 public:
  movies(char* t, int y, char* di, int d, int r);
  ~movies();                                                            

  char* director;
  virtual char* getDirector();
  int duration;
  virtual int getDuration();
  int rating;
  virtual int getRating();
  virtual void printStuff();
};
#endif
