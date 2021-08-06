Program on pointer incrementation and decrementation
#include<iostream.h>
#include<conio.h>
void main()
{
		int  *p ;  float * a  ;
		int  x = 10;  float  b= 10.5;
		p= &x  ;  a= &b;
cout<<endl<<“ The Address   Integer type  variable  x  before increment = “ <<(unsigned)p;
cout<<endl<,”he Address  of Float  type  variable  b after increment = “ <<(unsigned)p;
p= p + 4;   
cout<<endl<<“ The Address  of Integer type  variable  x  after increment = “ <<(unsigned)p;
cout<<endl<,”he Address  of Float  type  variable  b before increment = “ <<(unsigned)a;
a=a+2;
cout<<endl<,”he Address  of Float  type  variable  b after increment = “ <<(unsigned)a;
p=p-2;
cout<<endl<<“The Address  of Integer type  variable  x  after decrement = “ <<(unsigned)p;
getch();
return 0;
}
