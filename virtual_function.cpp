#include <iostream>
using namespace std;

class kartik1
{
private:
    int a = 30;

public:
    // this is example of run time polymorphism
    // virtaul function
    virtual void show()
    {
        cout << "I am method of class 1 and\n";
        cout << "value of a is :-  " << a << "\n";
    }
};
class drived : public kartik1
{
public:
    void show()
    {
        cout << "I am method of class 2\n";
    }
};
int main()
{
    kartik1 *ptr;
    kartik1 obj_parent;
    drived obj_drived;
    ptr = &obj_drived;
    ptr->show();
    return 0;
}