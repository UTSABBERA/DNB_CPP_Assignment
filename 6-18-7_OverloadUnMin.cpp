//program to overload unary  minus (-)
#include<iostream>
using namespace std;

class sample{
	int  x;
	int  y;
public :
	void getdata( int, int) ;
	void display(void);
	void operator -(){
		x = - x;
		y = - y;
	}
};

void sample::getdata( int a , int b){
	x = a ;
	y = b ;
}
void sample::display(void){
	cout << "The value of x = " << x << endl;
	cout << "The value of y = " << y << endl;
}

int main(){ 
	sample T;
	T.getdata(15 , -20);
	cout << "Before operator overloading" <<endl;
	T.display();
	-T;
	cout << "After operator overloading" << endl;
	T.display();
	return 0;
}
