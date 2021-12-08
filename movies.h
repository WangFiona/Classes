#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*                                                                          
 * Author: Fiona Wang                                                          
 * Dec. 4th, 2021                                                              
 * This is the header file for the movies child class                          
 */

class movies: public media {
 public:
  movies(char* t, int y, char* di, int d, int r);
  ~movies(); //Destructor

  //Initializing variables and declaring functions for movies class
  char* director;
  virtual char* getDirector();
  int duration;
  virtual int getDuration();
  int rating;
  virtual int getRating();
  virtual void printStuff(); //Prints all five components
};
#endif
