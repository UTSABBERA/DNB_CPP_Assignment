//program to declare a class, declare pointer to class, initialize and display the contents of the class member
#include <iostream>
using namespace std;

class man{
public:
	char name[30];
	int age;
};

int main(){
	man m = {"Abhisekh" , 25};
	man *p;
	p = &m;
	cout <<"Name = " << m.name << " and Age of the man = " << m.age << endl;
	cout <<"Name = " << p->name << " and Age of the man = " << p->age;
	return 0;
}
