#include <iostream>
using namespace std:
class A{
 public:
         A();
         ~A();
         int setup();
}
int A::setup(void){
     cout<<"A类成员函数调用"<<endl;
    return 1;
 }
class B{
public：
    int setup();
}
int B::setup(void){
    A.a;
    a.setup();
    return 1;
}
int main(void){
    B.b;
    b.setup();
}
