//Program to change the values of variables using pointer incrementation and decrementation
#include<iostream>
using namespace std;

int main(){
	int *p; 
	int x = 10;  
	p = &x; 
	cout << endl << "The value of x  before addition = " << *p;
	*p = *p + 10;   
	cout << endl << "The value of x  after   addition = " << *p;
	*p = *p - 2;
	cout << endl << "The value of x  after subtraction = " << *p;
	return 0;
}
