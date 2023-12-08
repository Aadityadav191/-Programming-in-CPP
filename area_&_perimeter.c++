#include<iostream>
#include<conio.h>
using namespace std;
class Area 
  {
    private:
       int redius;
    public:
       void setdetails();
       void displaydetails();
  };

void Area::setdetails()
  {
  cout<<"Enter the redius of the circle :";
  cin>>redius;
  }

void Area ::displaydetails()
  {
    int Area,perimeter ;
    Area=3.14*redius*redius;
    perimeter=2*3.14*redius;
    cout<<"\n The area of the cricel is "<<Area;
    cout<<"\n The perimerte of the circle is "<<perimeter ;
  }

int main()
  {
    Area A1;
    A1.setdetails();
    A1.displaydetails();
    return 0;
  }

