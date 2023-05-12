#include <iostream>
using namespace std;

class parent
{
private:
  void show1();

public:
   void show2();
};

void parent ::show1()
{
   cout<<"I am show 1\n";
}
void parent ::show2()
{
   show1();
   cout<<"I am show 2";
}

int main(){
   parent p;
   p.show2();
}