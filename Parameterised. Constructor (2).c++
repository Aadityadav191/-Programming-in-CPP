
/*  Define the class rectangle with data member Length and Breath . use constructor to 
    to construct initial ize the value of obj of rectangl and approx. member function to 
    calcuate the area of the rectangle */

  #include<iostream>
  #include<conio.h>
  using namespace std;
  class rectangle
   {
    private:
       int length, breath , area;
    public:
       rectangle(int l, int b)      // parameter constructor 
           {
            length=l;
            breath=b;
            area=l*b;
           }       
       void displaydetails()
          {
            cout<<"\n The Length of the Rectangle  is :"<<length;
            cout<<"\n The Breath of the rectangle  is :"<<breath;
            cout<<"\n And  The area of the Rectangle is :"<<area;
          }
   };

int main()
   {
    int l,b;
    cout<<"Enter the Length of the Rectangle :";
    cin>>l;
    cout<<"\n Enter the Breath if the rectangle ";
    cin>>b;
    rectangle R(l,b);               //calling parameter constructor
    R.displaydetails();
    return 0;
   }