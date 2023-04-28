#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
   int c;
   c = *x;
   *x = *y;
   *y = c;
   // cout << "numbers after swapping is :-  "<<endl<<"a= "<<
}
int main()
{
   int a = 20, b = 30;
   swap(&a, &b);
   cout << "a=  " << a << "   b=  " << b << endl;
   return 0;
}