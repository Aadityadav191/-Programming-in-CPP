
// Write a program to add two complax numeber in C++ 

#include <iostream>
using namespace std;
class complex             // declaring a class 
{
   public :             // access accifier 
      int real, img;      // Declare Data member 
};

int main()
{
   complex a, b, c;       //object 
   cout << "Enter a and b .";
   cout << "\na = ";
   cin >> a.real;
   cout << "b = ";
   cin >> a.img;
   cout << "Enter c and d .";
   cout << "\nc = ";
   cin >> b.real;
   cout << "d = ";
   cin >> b.img;
   
   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if (c.img >= 0)
      cout << "Sum of two complex numbers = " << c.real << " + " << c.img << "i";
   else
      cout << "Sum of two complex numbers = " << c.real << c.img << "i";

   return 0;
}