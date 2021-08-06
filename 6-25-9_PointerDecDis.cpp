//program to declare and display pointer
#include <iostream>
using namespace std;

int main(){
	int *p;
	int x = 10;
	p = &x;

	printf("The value of x = %d" , x); // using printf function
	printf("\nThe address of x is = %p", p);
	cout << endl << "The value of x = " << x; // using cout stream
	cout << endl << "The address of x is = " << &x;

	//prints using ponter
	printf("\nThe value of x = %d" , *p); // using printf
	printf("\nThe address of x is = %p", p);
	cout << endl << "The value of x = " << *p; // using cout
	cout << endl << "The address of x is = " << p;

	return 0;
}