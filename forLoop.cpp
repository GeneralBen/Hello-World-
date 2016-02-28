#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
  int counterMax;
  cout << "please enter max for counter" << endl;
  cin >> counterMax;
  
  for(int i = 0; i < counterMax; i++)
  {
    cout << (i + 1) << endl;
  }
}
