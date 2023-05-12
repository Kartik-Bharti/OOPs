#include <iostream>
using namespace std;

class kartik1
{
private:
    int a = 19;

public:
    void call1()
    {
        cout << "I am " << a << " years old \n";
    };
    void show1();
};

class kartik2 : protected kartik1
{
    int b = 29;

public:
    void call2()
    {
        cout << "I am " << b << " years old \n";
    }
};

class kartik3 : public kartik2
{
public:
    void show3()
    {
        void call1();
        void show1();
        void call2();
        cout << "my friend age is " << 23 << endl;
    }
};

// Demo of Scope-resolution Operator
void kartik1::show1()
{
    cout << "Hi I am scope resolution opertaor for parent class\n";
}

int main()
{
    kartik3 obj1;
    obj1.show3();
    return 0;
}