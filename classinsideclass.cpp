#include <iostream>
using namespace std;

class practice
{
public:
   int a, b;
   class kartik
   {
   public:
      sk()
      {
         printf("Kartik");
      }
   };

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
   practice p;
   p.abc(12);
   p.show();
   practice::kartik k;
   k.sk();
   return 0;
}
