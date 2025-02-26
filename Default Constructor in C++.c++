#include<iostream>
#include<conio.h>
using namespace std;
class initiallize
  {
    private:
      int a;
    public:
      initiallize()     //default Construction 
         {
            a=2000;
         }
      void display()
         {
            cout<<"The value of a is : "<< a ;
         }    
  };

int main()
  {
   initiallize I;     //default Construction  Automatically Called 
   I.display();       
   return 0;
  }

