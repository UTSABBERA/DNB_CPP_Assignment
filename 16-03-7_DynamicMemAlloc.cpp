#include <iostream>
using namespace std;

int main(){
	int *pointInt; //declare an int pointer
	float *pointFloat; //declare a float pointer

	pointInt = new int; //dynamically allocate memory
	pointFloat = new float;

	*pointInt = 45; //assigning value to the memory
	*pointFloat = 45.45f;

	cout << *pointInt << endl;
	cout << *pointFloat << endl;
	
	delete pointInt; //deallocate the memory
	delete pointFloat;
	
	return 0;
}
