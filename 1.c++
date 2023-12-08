#include<iostream>
#include<conio.h>
using namespace std;
int main()
  {
    int a;
    a=100;
    int &b=a;
    int &c=a;
    int &d=a;
    
    cout<<" The real  value of a is  "<<a;
    cout<< " \n The reference value  of the b is "<<b;
    cout<<" \nThe  value of c is "<< c;
    cout<< " \nThe va;ue of the d is "<< d;
    return 0;

  }