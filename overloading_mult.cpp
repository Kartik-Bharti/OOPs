#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;
    public:
    void add(int a,int b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        cout<<"your complex number is :-  \n";
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator*(complex bb)
    {
        complex cc;
        cc.real=real*bb.real;
        cc.img=img*bb.img;
        return cc;
    }
};
int main()
{
    complex aa,bb,cc;
    aa.add(12,3);
    bb.add(23,4);
    cc=aa*bb;
    cc.display();
    return 0;
}