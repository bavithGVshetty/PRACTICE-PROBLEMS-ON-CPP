// Polymorphism
// 1.Compile time
// 2.Run time

#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Math m;
    cout << "Sum\n"
         << m.add(3, 4) << endl;
    cout << "Sum for 3\n"
         << m.add(3, 4, 9) << endl;
    cout << "Sum for double values\n"
         << m.add(3.5, 4.5) << endl;
}