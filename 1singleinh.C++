#include<iostream>
#include<conio.h>
using namespace std;
class base
  {
    private:
      int x;
    protected:
      int y;
    public:
      void setdata()
        {
            cout<<"Enter the value of X:";
            cin>>x;
            cout<<"Enter the vaue of Y:";
            cin>>y; 
        }
      void displaydata()
        {
            cout<<"the value of the X is:"<<x;
            cout<<"The value of the Y is:"<<y;
        }
  };

class Derived:public base
  {
    private:
      int sum;
    public:
      void setsum()
        {
           sum=getX()+y;
        }
     void displaysum()
        {
            cout<<sum;
        }
  };

int main()
  {
    Derived obj;
    obj.setdata();
    obj.displaydata();
    obj.setsum();
    obj.displaysum();
    return 0;
  }

