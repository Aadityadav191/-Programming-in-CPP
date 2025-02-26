#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one
  {
    int numone;
      public:
        void setone();
        void displayone();
        void swap(two &);
  };

class two 
  {
    int numtwo ;
      public:
        void settwo();
        void displaytwo();
        friend void one ::swap(two &);
  };

int main()
  {
    one objone;
    two objtwo;
    objone.setone();
    objtwo.settwo();
    cout<<"\n before swapping";
    objone. displayone ();
    objtwo.displaytwo ();
    cout<<"\n After swapping : ";
    objone.displayone();
    objtwo.displaytwo ();
  
      return  0;
  }

  void one:: swap(two & y)
  {
    int temp;
    temp=numone ;
    numone =y.numtwo;
    y.numtwo=temp;
  }
