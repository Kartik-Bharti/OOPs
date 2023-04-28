#include <iostream>
#include<string.h>
using namespace std;
class addstring
{
private:
    char str[30];
public:
    void value(char sk)
    {
        // strcpy(this->str,sk);
    }
    void display()
    {
        cout << "String after concatination is:-   "<<str;
    }
    addstring operator+(addstring s1)
    {
        addstring s3;
        strcat(str,s1.str);
        strcpy(s3.str,str);
        return s3;
    }
};
int main()
{
    char sk1[30],sk2[30];
    addstring s1,s2,s3;
    cout<<"enter value of first string\n";
    gets(sk1);
    cout<<"enter value of second string\n";
    gets(sk2);
    s3=s2+s1;
    s3.display();
    return 0;
}