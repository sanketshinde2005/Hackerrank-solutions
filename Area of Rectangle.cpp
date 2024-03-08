#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
public:
    int a;
    int b;
    void display()
    {
        cout << a << " " << b << endl;
    }
    
};
class RectangleArea : public Rectangle
{
public:
   int read_input(){
        cin >> a ;
        cin >> b ;
        return a;
    }
public:    
    void display()
    {
        cout << a * b << endl;
    }
};
int main()
{
    RectangleArea r2;
    r2.read_input();
    Rectangle *area = &r2;   
    area->display(); 
    r2.display();
    return 0;
}
