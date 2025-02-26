#include<iostream>
#include<conio.h>
using namespace std;
class complex
  {
    private:
      int real, img;
    public:
      complex()
        {
        }
      complex(int r, int i)
        {
            real=r;
            img=i;
        }
      void operator -()
        {
            complex temp;
            temp.real=-real;
            temp.img=-img;
        }
      void display()
        {
            cout<<real;
            cout<<img;
        }
  };
int main()
  {
    complex c1(10,20), c2;
    c1.display();
    c2= -c1.operator -();
    c2.display();


  }

