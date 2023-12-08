
// write a programm to calcuate the sum of two number using friend function.

#include<iostream>
using namespace std;
class shyam 
  {
    protected:
      int X,Y;
    public:
      void setvalue()
         {
            cout<<"\n Enter the value of X and Y:";
            cin>>X>>Y;
         }
      void dispalyvalue()
         {
            cout<<"\n The Entered value of X is "<<X ;
            cout<<"\n The Entered value of y is "<<Y;
         }
      friend void sum(shyam a);  // { class name + obj name }     friend function  declaraton
        
      /* Here you can also write only class name  as argument in friend Function    */
  };

  void sum(shyam a )                //friend function definition 
    {
        int total;
        total= a.X+a.Y;
        cout<<"\n The sum of two number is:"<<total;
    }
     
  int main()
    {
        shyam  a;
        a.setvalue();
        a.dispalyvalue();
        sum ( a );             // calling friend function 
        return 0;
    }