#include <iostream>
using namespace std;

int sum(int m)
{
    if (m == 0)
        return 0;
    else
        return m + sum(m - 1);
}

int main()
{
    cout << sum(5);
    return 0;
}