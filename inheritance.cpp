#include <iostream>
using namespace std;
class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle" << endl;
    }
};
class Triangle2
{
public:
    void triangle2()
    {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

class Isosceles : public Triangle, public Triangle2
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle" << endl;
    }
};
int main()
{
    Isosceles Tri;
    Tri.isosceles();
    Tri.triangle2();
    Tri.triangle();
    return 0;
}