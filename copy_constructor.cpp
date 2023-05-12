// // Implicit copy constructor
// #include <iostream>
// using namespace std;

// class Sample
// {
//    int id;

// public:
//    void set(int x)
//    {
//       id = x;
//    }
//    void display()
//    {
//       cout << "ID= " << id << "\n";
//    }
// };

// int main()
// {
//    Sample obj1;
//    obj1.set(10);
//    obj1.display();
//    Sample obj2(obj1); // or obj2=obj1;
//    obj2.display();
//    return 0;
// }

// *************************
// Explicit copy constructor
#include <iostream>
using namespace std;

class Sample
{
   int id;

public:
   void init(int x)
   {
      id = x;
   }
   Sample() {} // default constructor with empty body

   Sample(Sample &t) // copy constructor
   {
      id = t.id;
   }
   void display()
   {
      cout << "ID=  " << id << endl;
   }
};

int main()
{
   Sample obj1;
   obj1.init(10);
   obj1.display();
   Sample obj2(obj1); // or obj2=obj1; copy constructor called
   obj2.display();
   return 0;
}
