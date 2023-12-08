#include<iostream>
#include<conio.h>
using namespace std;
class Reactangle
  {
   private:
     int L;
     int B;
   public:
     Reactangle(int Leangth, int Breath)
        {
         Leangth=L;
         Breath=B;
        }
    //  void setdetails()
    //     {
    //         cout<<"Enter the Lengthe and Braeath of the Rectngle ";
    //         cin>> L>> B;
    //     }
     void displaydetails()
        {
          cout<<"\n The Lengthe and Braeath of the Rectngle is" << L  <<   "  and  "   << B;
        }
     void area()
        {
            int area;
            area=L*B;
            cout<<"\n The area of the Reactangle is " << area;
        }
  };


int main()
  {
    Reactangle R1(20, 30);
    // R1.setdetails();
    R1.displaydetails();
    R1.area();
    return 0;

  }