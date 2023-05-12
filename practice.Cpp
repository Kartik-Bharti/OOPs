#include <iostream>
using namespace std;

class practice
{
private:
   int a, b;
   class kartik
   {
   public:
      void sk()
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

protected:
   void sk()
   {
      cout << "Iam internal";
   }
};

int main()
{
   practice p;
   p.abc(12);
   p.show();
   // practice::kartik k;
   // k.sk()
   return 0;
}
