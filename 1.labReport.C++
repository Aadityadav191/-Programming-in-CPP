#include<iostream>
#include<conio.h>
using namespace std;
class car 
  {
    static int count ;
       public:
         car()
          {
            count++;
            cout<<"There are" <<count<<" number of the cars ";
          }
        ~car()                   //destructor 
           {
            count--;
            cout<<"There are" <<count <<" Number of the car";
           }      
  };
  int car::count=70;

  int main()
    {
        cout<<"\n We are in main";
                car c1,c2,c3,c4;            // declaring object 
          {
            cout<<"\n We are in block 1";
            car c5;
          }
          
          {
            cout<<"\n We are in block 2 ";
            car c6;
          };
          cout<<"\n we have Re-entered in main";

          return 0;
    }