#include <iostream>
#include <unistd.h>
using namespace std;

inline void initiate()
{
  system("clear");
  cout << "Initializing";
  for (int i = 0; i < 5; i++)
  {
    cout << ".";
    sleep(1);
  }
}