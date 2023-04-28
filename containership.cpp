#include<iostream>
using namespace std;
class kartik1
{
    private:
    int a;
    public:
    void show1()
    {
        cout<<"enter value of a\n";
        cin>>a;
        cout<<"value of a is :-  "<<a<<endl;
    }
};
class kartik2
{
    public:
    class kartik1 obj;
    void show1()
    {
        cout<<"Hi I am member of class kartik2\n";
    }
};
int main()
{
    kartik2 obj;
    obj.obj.show1();
    obj.show1();
    return 0;
}