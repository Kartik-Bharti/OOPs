#include <iostream>
using namespace std;
void TOH(int n, char a, char b, char c)
{
    if (n == 1)
        cout << "Moved disk " << n << " from rod " << a << " to rod " << c << endl;
    else
    {
        TOH(n - 1, a, c, b);
        cout << "Moved disk " << n << " from rod " << a << " to rod " << c << endl;
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    cout << "enter value of n:-\n";
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}