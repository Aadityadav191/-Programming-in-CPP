#include<iostream>
#include<conio.h>
using namespace std;
class parameterised
   {
     private:
        int a,b;
     public:
        parameterised(int x,int y )       //parameterised constructor
           {
            cout<<"\n This is parameterised constructor";
            a=x;
            b=y;
           }
        void display()
           {
            cout<<"\n a= "<<a ;
            cout<<"\n b= "<<b;
           }
   };

int main()
   {
    int x,y;
    cout<<" ENter the x and y:";
    cin>>x >> y;
    parameterised P(x,y);            //parameterised constructor automotically  Called 
    P.display();
    return 0;
   }