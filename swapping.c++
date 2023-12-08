// WAP Program to swap two numbers using friend function
#include <iostream>
#include<conio.h>
using namespace std;
 
class Swap {
    int temp, a, b;       // Declare the variables to  Swap Class
       public:
 
                        
     Swap(int a, int b)  
    { 
        this->a = a;
        this->b = b;
    }

    friend void swap(Swap&);
};
 
// Define the swap function outside class 
void swap(Swap& s1)
{
    cout << "\n number Before Swapping: " << s1.a << " " << s1.b;
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\n number After Swapping: " << s1.a << " " << s1.b;
}

int main()
{
    Swap s(4, 6);
    swap(s);
    return 0;
}