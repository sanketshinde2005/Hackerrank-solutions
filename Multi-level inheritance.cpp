#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isoceles : public Triangle
{
public:
    void isoceles()
    {
        cout << "I am an isosceles triangle\n";
    }
};

class Equilateral : public Isoceles
{
public:
    void equilateral()
    {
        cout << "I am an equilateral triangle\n";
    }
};

int main()
{
    Equilateral epr;
    epr.equilateral();
    epr.isoceles();
    epr.triangle();
    return 0;
}