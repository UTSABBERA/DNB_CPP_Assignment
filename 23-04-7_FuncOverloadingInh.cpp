#include <iostream>
using namespace std;

class A{
public :
	void function() {
		cout << "Super Class Function" <<endl;
	}
};

class B : public A {
public :
	void function() {
		cout << "Base Class Function" << endl;
	}
};

int main() {
	A A1; //parent class object 
	A1.function(); 
	B B1; //child class object 
	B1.function(); 
	return 0;
}
