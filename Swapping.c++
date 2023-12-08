#include<iostream>
#include<conio.h>
using namespace std;
int swap(int ,int );
int main()
  {
    int a,b;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the  value of b";
    cin>>b;
    cout<<  " Number before Swapping";
    cout<< "a="<<a <<"and b=" <<b;
    swap (a , b);
    cout<<  " Number after Swapping";
    cout<< "a="<<a <<"and b=" <<b;
    return 0;
  }

void swap(int &x, int &y)
  {
   int temp;
   temp=x;
   x=y;
   y=temp;
   
  }