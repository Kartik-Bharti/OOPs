#include <iostream>
#include <math.h>
using namespace std;

void GCD(int x, int y)
{
    int sk;
    if (x <= y)
    {
        sk = x;
    }
    else
    {
        sk = y;
    }
    for (int i = sk; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << "GCD of " << x << " and " << y << " is :-  " << i << endl;
            exit(0);
        }
        cout << i << endl;
    }
};

int main()
{
    int n1, n2;
    cout << "enter two numbers to calculate GCD:-  \n";
    cin >> n1 >> n2;
    GCD(n1, n2);
    return 0;
}