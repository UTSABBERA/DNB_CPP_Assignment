// Write a Program to read an array of n numbers and find the largest number  from the array
#include<iostream>
using namespace std;

int main(){
	int  x[20], i, n, largest; 
	cout << "Enter the number of elements in the array: " << endl;
	cin >> n;
	cout << "Give the elements: " << endl;
	for(i = 0 ; i<n; i++)
		cin>>x[i];
	largest = *x; //largest is initialized to 1st number
	for(i=0; i<n ; i++){
		if(*(x+i)> largest) //if x[i] is greater than largest
			largest = *(x+i); //largest = x[i]
	}
	cout << "The largest number in the array is " << largest << endl;
	return 0;
}
