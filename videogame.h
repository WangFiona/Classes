#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class videogame: public media {
 public:
  videogame(char* t, int y, char* p, int r);
  //~videogame();

  char* publisher;
  virtual char* getPublisher();
  int rating;
  virtual int getRating();
};
