#include<iostream>
using namespace std;
void round(float x)
{
    int a=x+.5;
    cout<<"number after round offed is :-  "<< a<<endl;
};
int main()
{
    float x;
    cout<<"enter value of x :-   \n";
    cin>>x;
    round(x);
    return 0;
}