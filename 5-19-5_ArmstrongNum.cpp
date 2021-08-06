//check whether a number is amstrong (if sum of cubes of every digit of a number is equal to the number)
#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int r, res = 0, m = n;
    while(n != 0){
        r = n%10;
        res += (r*r*r);
        n /= 10;
    }
    if (res == m) return true;
    return false;
}

int main(){
    int n;
    cout << "Enter a number: "; cin >> n;
    if (isArmstrong(n)) cout << n << " is a rmstrong a number";
    else cout << n << " is not armstrong a number";
    return 0;
}