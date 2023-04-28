// Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances

#include <iostream>
using namespace std;

class A
{
public:
   void show()
   {
      cout << "Hello from A \n";
   }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
   D object;
   object.show();
}
