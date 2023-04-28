//Function overridding
#include<iostream>
using namespace std;
class kartik1
{
    public:
    void fun()
    {
        cout<<"I am method of class 1\n";
    }
};
class kartik2:public kartik1
{
    public:
    void fun()
    {
        cout<<"I am method of class 2\n";
        //Statement for calling function of parent class
        kartik1::fun();
    }
};
int main()
{
    kartik2 obj1;
    obj1.fun();
    //Statement for calling function of parent class
    obj1.kartik1::fun();
    return 0;
}