//print the prime numbers in between 1 to n (n is upper limit) using function
#include <iostream>
using namespace std;

bool isPrime(int x){
    for(int i = 2; i <= x/2; i++)
        if(x%i == 0) return false;
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime Numbers (between 1 - " << n << ") are: ";
    for(int i = 2; i <= n; i++)
        if (isPrime(i)) cout << i << " ";
    return 0;
}