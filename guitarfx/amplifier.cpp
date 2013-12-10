#include <iostream>

#define BUFFERSIZE 10

using namespace std;


class Amplifier
{
public:
  Amplifier(); // constructor
  void show_level();
  long level;
}

Amplifier::Amplifier()
{
  this->level=5; // default
}


void Amplifier::show_level()
{
  cout << "Amplifier level: " << level << endl;
}


int main()
{
Amplifier amp1;
Amplifier amp2;

  //amp1.level325;
  //amp2.level=2;
  amp1.show_level();
  amp2.show_level();

} // main()

c++.cpp

