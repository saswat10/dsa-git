#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int testCases;
    cin >> testCases;
    int x;
    for (int i = 1; i <= testCases; i++)
    {

        cin >> x;
        cout << ((x<4)?"MILD":((x>=4 && x<7)?"MEDIUM":"HOT"))<< endl;
    }
    return 0;
}
