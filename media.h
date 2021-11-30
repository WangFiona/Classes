#include <iostream>
#include <cstring>

using namespace std;

class media{
 public:
  media(char* t, int y);
  //~media();
  
  char* title;
  char* getTitle();
  int year;
  int getYear();
};
