



#include<iostream>
#include<conio.h>
using namespace std;
class addition         //class declare 
  {
    private:
      int a,b;
    public:
      void setdeails()
        {
            cout<<"Enter the Value  of a and b";
            cin>> a>>b;
        }
      void displaydetails()
        {
          cout<<"The value of a and b is :"<<a <<" and "<<b;
        }
      friend int sum(addition A);    // declare Friend Function 
  };

int sum(addition A)             ///Friend class definition 
  {
     int Total;
     Total=A.a + A.b;
     cout<<"\n The sum of the  number is :"<<Total;
  }

int main()
  {
    addition A;
    A.setdeails();
    A.displaydetails();
    sum(A);            // friend function call 
    return 0; 
  }