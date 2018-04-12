#include <iostream>
//
//violate告诉编译器变量i是随时可能发生变化的,每次使用i必须从i的地址中读取,因而编译器生成的可执行码会重新从i的地址读取数据放在k中.

//而优化的做法是，由于编译器发现两次从i读数据的代码之间的代码没有对i进行过操作，它会自动把上次读的数据放在k中。而不是重新从i里面读。这样以来，如果i是一个寄存器变量或者表示一个端口数据就容易出错，所以说volatile可以保证对特殊地址的稳定访问，不会出错.

//2.violate可能的变量种类:(1)并行设备的硬件寄存器,(2)多线程应用中被几个任务共享的变量.sing namespace std;
int fun1(volatile int *a)
{
    return  *a * *a;
}
int main(void)
{
    int a=10;

    cout << fun1(&a)<< endl;
}
