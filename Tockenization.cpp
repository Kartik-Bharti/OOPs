#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="Hi my name is kartik my wife name is somya";
    char *sk;
    sk=strtok(str," ");
    while (sk!=NULL)
    {
        cout<<sk<<endl;
        sk=strtok(NULL," ");
    }
    return 0;
}