#include<iostream>
#include<conio.h>
using namespace std;
class class2;
class  class1
 {
    private:
      int x;
    public:
      int setvalue()
        {
            cout<<"\n Enter the value of X:";
            cin>> x;
        }
      friend int max(class1 , class2);
 };

class class2
 {
    private:
      int y;
     public:
      int setvalue()
        {
            cout<<"\n  Enter the value of Y:";
            cin>> y;
        }
      friend int max(class1 , class2);
 };

int max(class1 C1, class2 C2)
 {
    if(C1.x > C2.y)
      {
        cout<<"X is Maximum  ";
      }
    else 
      {
        cout<<"Y is Maximum ";
      }
 }

int main()
 {
    class1 C1;
    class2 C2;
    C1.setvalue();
    C2.setvalue();
    max(C1,C2);
    return 0;
 }
