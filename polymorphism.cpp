// polymorphism means Same entitiy behaves different in different cenerios 
// types of polymorphism
// 1- static polymorphism  (static binding)(early binding)
//    1.1 function overloading / method overloading
//    1.2 operator overloading
// 2- dynamic polymorphism  (dynamic binding)(late binding)
//    2.1 virtual function
#include<iostream>
using namespace std;
class kartik
{
    int a,b;
    public:
    kartik();
    void show()
    {
        cout<<"your number is :-  "<<a<<"+"<<b<<"i\n";
    }
};
kartik:: kartik()
{
    cout<<"enter value of a\n";
    cin>>a;
    b=231;
}
int main()
{
    kartik obj;
    obj.show();
    return 0;
}