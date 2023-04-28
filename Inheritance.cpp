#include <iostream>
using namespace std;

class kartik1
{
private:
    int a = 19;

public:
    void call()
    {
        cout << "I am " << a << " years old \n";
    };
    void show1();
};
class kartik2 : public kartik1
{
protected:
    int b = 29;

public:
    void call2()
    {
        cout << "I am " << b << " years old \n";
    }
    void show2();
};
class kartik3 : protected kartik2
{
public:
    void show3()
    {
        cout << "my friend age is " << 23 << endl;
    }
};

// Demo of Scope-resolution Operator
void kartik1::show1()
{
    cout << "Hi I am scope resolution opertaor for parent class\n";
}
void kartik2::show2()
{
    cout << "Hi I am scope resolution opertaor for child class\n";
}
int main()
{
    cout << "Hi everyone my name is kartik bharti\n";
    class kartik2 obj;
    kartik3 obj2;
    obj.call();
    obj.call2();
    obj.show1();
    obj.show2();
    obj2.show3();
    return 0;
}