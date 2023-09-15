#include <iostream>
using namespace std;


void c_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// C++ supports natively calling by reference
inline void cpp_swap(int& i, int& j)
{
    int temp = i;
    i = j;
    j = temp;
}

// C++ has overloading the function, different param types with same func name
inline void cpp_swap(double& i, double& j)
{
    double temp = i;
    i = j;
    j = temp;
}




int main()
{
    int a = 12;
    int b = 5;

    cpp_swap(a, b);                                 // signature matching algorithm in C++ -> use the int parameter version of the overloaded function.

    double x = 12.5;
    double y = 6.235;

    cpp_swap(x , y);                                // signature matching algorithm in C++ -> use the double parameter version of the overloaded function.
    
    cout << "A: " << a << " B: " << b << endl;
    cout << "X: " << x << " Y: " << y << endl;
}