#include <iostream>
using namespace std;
class practice
{
private:
   /* data */
public:
   practice(/* args */);
   abc();
   // ~practice();
};

practice::practice(/* args */)
{
   cout << "Iam contaructor";
}
practice::abc()
{
   cout << "Iam abc";
}

// practice::~practice()
// {
// }

int main()
{
   practice p;
   p.abc();
   return 0;
}
