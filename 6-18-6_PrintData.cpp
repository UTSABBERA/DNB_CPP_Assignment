//print variables of different data types using same function with different argument of different
#include <iostream>
using namespace std;

class Data {
public:
    void print( int  i ){
    cout << "Printing int: " << i << endl;
    }
    void print(double  f){
        cout << "Printing float: " << f << endl;
    }
    void print(string c){
        cout << "Printing character: " << c << endl;
    }
};

int main(void){
   	Data pd;
  	//call print to print integer
 	pd.print(5);
   
 	//call print to print float
   	pd.print(500.263);
   
  	//call print to print character
  	pd.print("Hello C++");
 
   	return 0;
}
