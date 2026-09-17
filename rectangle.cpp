#include <iostream>
using namespace std;

class Rectangle
{

     private:
         float l, b;

     public:
         void getData()
         {
             cout<<"enter l:";
             cin>>l;
             cout<<"enter b:";
             cin>>b;
          }
       
            float area();
            float perimeter();
         void Display()
         {
             cout<<"area of the rectangle is:"<<area();
             cout<<"perimeter of the rectangle is:"<<perimeter();
         }
};

    float Rectangle::area()
     {
         return l*b;
     }     
    float Rectangle::perimeter()
     {
         return 2*(l+b);
     }


    int main()
    {
      Rectangle r;
    
      r.getData();
      r.Display();
      return 0;
    }
