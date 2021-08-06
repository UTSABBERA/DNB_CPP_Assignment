#include <iostream>
using namespace std;

class Student{
	int age;
public :
	Student() : age(12){}
	// constructor initializes age to 12
	void getAge(){
		cout << "Age = " << age << endl;
	}
};
int main()
{
	Student *ptr = new Student();
	// dynamically declare Student object
	ptr->getAge();
	// call getAge() function
	delete ptr;
	// ptr memory is released
	return 0;
}
