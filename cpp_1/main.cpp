#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
    srand(time(0));
    int number = rand() % (6) + 1;
    cout << number << "\n";
}