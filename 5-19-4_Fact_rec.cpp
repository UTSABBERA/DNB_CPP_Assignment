//find the factorial of any intiger number using recoursive function
#include <iostream>
using namespace std;

int fact(int n){
    if (n == 0)
        return 1;
    return n * fact(n-1);
}

int main(){
    int n;

    cout << "Enter a number: "; cin >> n;
    cout << n << "! = " << fact(n);

    return 0;
}