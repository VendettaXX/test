#include <iostream>
int main(void)
{
    int  i;
    int a[20]={1,2,3,4};
    for( i=0;i<=4;i++)
    {
        a[i]=0;
        std::cout << "改变循环变量 "<< std::endl;
    }
}
