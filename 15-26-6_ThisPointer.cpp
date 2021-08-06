//Class point modified to access data members through  pointer this
#include <iostream>
using namespace std;

class point{
	float x;
	float y;
public:
	point(){}
	point(float cx, float cy){
		x = cx;
		y = cy;
	}
	void showxy(){
		cout << "\nX coordinate = " << this -> x;
		cout << "\nY coordinate = " << this -> y;
	}
};
int main(){
	point Q(5, 7);
	cout <<"The cordinates of the point are: ";
	Q.showxy();
	return 0;
}
