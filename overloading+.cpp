// Operator overloading is just increasing the scope of any operator for different purpose
// operator overloading is static Polymorphism

#include <iostream>
using namespace std;
class kartik
{
private:
    int a, b;

public:
    void enter()
    {
        cout << "enter value of a and b\n";
        cin >> a >> b;
    }
    void display()
    {
        cout << "value of complex number is :-  " << a << "+" << b << "i\n";
    }
    kartik operator+(kartik bb)
    {
        kartik cc;
        cc.a = a + bb.a;
        cc.b = b + bb.b;
        return cc;
    }
};
int main()
{
    kartik aa, bb, cc;
    aa.enter();
    bb.enter();
    cc = aa + bb;
    aa.display();
    bb.display();
    cc.display();
    return 0;
}