//program to overload binary operator (+)
#include <iostream>
using namespace std;

class sample{
	int a, b, c;
public:
	void getdata(void);
	void display(void);
	sample operator + (sample);
};

void sample::getdata(){
	cout<< "Enter values for a, b : ";
	cin >> a >> b;
}
void sample::display(){
	cout << "The value of A = " << a << endl;
	cout << "The value of B = " << b << endl;
}

sample sample::operator + (sample P){
	sample T;
	T.a = a + P.a;
	T.b = b + P.b;
	return (T);
}
int main()
{
	sample X, Y, Z;
	cout << "Object X" << endl;
	X.getdata();
	cout << "Object Y" << endl;
	Y.getdata();
	Z = X + Y;
	cout << "Object X" << endl;
	X.display();
	cout << "Object Y" << endl;
	Y.display();
	cout << "Object Z" << endl;
	Z.display();
	return 0;
}
