#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

using namespace std;

/*
 * Author: Fiona Wang
 * Dec. 4th, 2021
 * This is the header file for the media parent class
 */

class media{
 public:
  media();
  media(char* t, int y);
  virtual ~media(); //Destructor

  //Initializing variables and declaring functions for media parent class
  char* title;
  virtual char* getTitle();
  int year;
  virtual int getYear();
  virtual void printStuff(); //Prints the title and year
};
#endif
