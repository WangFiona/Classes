#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>

using namespace std;

class media{
 public:
  media();
  media(char* t, int y);
  virtual ~media();
  
  char* title;
  virtual char* getTitle();
  int year;
  virtual int getYear();
  virtual void printStuff();
};
#endif
