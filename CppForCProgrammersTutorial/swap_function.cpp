#include <iostream>
using namespace std;


void swapC(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}




int main()
{
    int a = 12;
    int b = 5;

    swapC(&a, &b);
    
    cout << "A: " << a << " B: " << b << endl;
}