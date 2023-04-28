#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;
    public:
    void number(int a,int b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        cout<<"your complex number is :-  \n";
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void operator==(complex bb)
    {
        if(real==bb.real && img==bb.img)
        {
            cout<<"Both the complex numbers are equal\n";
            display();
            bb.display();
        }   
    }
    void operator!=(complex bb)
    {
        if (real!=bb.real || img!=bb.img)
        {
            
            cout<<"Complex numbers are not equal\n";
            display();
            bb.display();
        }
        
    }
};
int main()
{
    complex aa,bb;
    aa.number(23,4);
    bb.number(23,5);
    aa==bb;
    aa!=bb;
    return 0;
}