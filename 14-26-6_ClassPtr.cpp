//program to declare an object and pointer to the class, invoke the member function using pointer
#include <iostream>
using namespace std;

class bill{
    int qty;
    float price, amount;
public:
    void getdata(int a, float b, float c){
        qty = a;
        price = b;
        amount = c;
    }
    void show(){
        cout << "Quantity = " << qty << endl;
        cout << "Price = "<< price << endl;
        cout << "Amount = " << amount << endl;
    }
};
int main()
{
    bill s;
    bill *p = &s;
    p -> getdata(10, 250.50, 10 * 250.50);
    (*p).show();
    return 0;
}
