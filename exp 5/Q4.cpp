#include <iostream>
using namespace std;
class rectangle
{ int l,b;
public:
rectangle()
{
l=1;
b=2;
}
rectangle(int x)
{
l=x;
b=x;
}
rectangle(int x,int y)
{
l=x;
b=y;
}
void area(){
  cout<<"Area:"<<(l*b)<<endl;
}
};
int main(){
  rectangle r;
  r.area();
  rectangle r1(4);
  r1.area();
  rectangle r2(2,4):
  r2.area();
return 0;
}
