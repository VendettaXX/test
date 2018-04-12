#include <iostream>
using namespace std;
class Base{
    public:
        void fun1(int a);
        void fun2(char a);
};
void Base::fun1(int a){
    cout<< a <<endl;
}
void Base::fun2(char a){
    this->fun1((int)a);
}
int main(void){
    Base a;
    a.fun1(10);
    a.fun2('a');
    return 1;
}
