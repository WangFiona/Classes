#include <iostream>
#include "media.h"

using namespace std;

media::media(char* t, int y){
  title = new char[80];
  strcpy(title, t);
  year = y;
}

char* media::getTitle(){
  return title;
}

int media::getYear(){
  return year;
}
