#include <iostream>
using namespace std;

class sum
{
private:
    int a;

public:
    void addition(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    sum operator+(sum bb)
    {
        sum cc;
        cc.a = a + bb.a;
        return cc;
    }
};

int main()
{
    sum aa, bb, cc;
    aa.addition(23);
    bb.addition(43);
    cout << ("Number before addition is\n");
    aa.display();
    bb.display();
    cout << "number after addition is \n";
    cc = aa + bb;
    cc.display();
    return 0;
}