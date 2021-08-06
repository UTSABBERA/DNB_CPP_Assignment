//program to insert and display n elements using array of pointers
#include <iostream>
using namespace std;

int main(){
	int i, n;
	int* p[20]; // array of pointers
	cout << "Enter the number of elements in the array: ";
	cin >> n;

	// cout << "Give the elements: ";
	// for (i = 0; i < n; i++)
	// 	cin >> *p[i];
	cout << "The address of the elements are: ";
	for (i = 0; i < n; i++)
		cout << p[i] << " ";
	// cout << "\nThe elements are: ";
	// for (i = 0; i < n; i++)
	// 	cout << *p[i] << " ";
	return 0;
}
