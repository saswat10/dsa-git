#include <iostream>
using namespace std;

int exponent(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * exponent(m, n - 1);
}

int main()
{
    cout << exponent(2, 5);
    return 0;
}