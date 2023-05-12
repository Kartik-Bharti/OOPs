// A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes. For example, a LinkedList class may be allowed to access private members of Node
// We can declare a friend class in C++ by using the friend keyword
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2);
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "Your Complex number is " << a << "+" << b << "i\n";
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex obj1, obj2, sum;
    obj1.setnumber(23, 34);
    obj1.print();
    obj2.setnumber(43, 1);
    obj2.print();
    sum = sumcomplex(obj1, obj2);
    sum.print();
    return 0;
}