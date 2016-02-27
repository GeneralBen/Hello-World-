// Hello World in c++

#include <iostream>

// this allows all of the standerd methods to be used without typing them explicitly

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "hello world!" << endl;
	
	// if "using namespace std;" wasn't called out you'd have to do this
	std::cout << "Hello World!" << std::endl;
}
