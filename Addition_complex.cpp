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
    complex operator-(complex bb)
    {
        complex cc;
        cc.real=real-bb.real;
        cc.img=img-bb.img;
        return cc;
    }
};
int main()
{
    int a,b,x,y;
    complex aa,bb,cc;
    cout<<"Enter first complex number \n";
    cin>>a>>b;
    cout<<"Enter second complex number \n";
    cin>>x>>y;
    aa.add(a,b);
    bb.add(x,y);
    cout<<"Complex number before Subtraction is \n";
    aa.display();
    bb.display();
    printf("Complex number after Subtraction is:- \n");
    cc=aa-bb;
    cc.display();
    return 0;
}