// Abstraction can be performed by only using pure virtual function

#include <iostream>
using namespace std;

class parent
{
public:
   virtual void show() = 0;
};

void parent ::show()
{
   cout << "I am from parent class";
}

class child : public parent
{
public:
   void show()
   {
      cout << "Hello\n";
   };
   void hi()
   {
      cout << "I am not pure virtual function\n";
   }
};

int main()
{
   parent *p;
   child c;
   p = &c;
   c.hi();
   p->show();
   return 0;
}