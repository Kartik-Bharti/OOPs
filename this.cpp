#include <iostream>
using namespace std;

class thisquestion
{
private:
   int a, b;

public:
   void abc(int a)
   {
      this->a = a;
   };
   void show()
   {
      cout << a << endl;
   }
};

int main()
{
   thisquestion p;
   p.abc(12);
   p.show();
   return 0;
}
