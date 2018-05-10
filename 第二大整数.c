#include <stdio.h>
int main(void)
{
    int a[20]={28221,454,234,2,33,24,2222,4245,4242,545,242,24325,22,368,67,56,2341,98,45};
    int cmn=0,cmv=a[0];
    int mn,mv;
    int sn=0,sv=a[0];
    for(int i=0;i<19;i++)
    {
        if (a[cmn]<a[i+1])
        {
            cmn=i+1;
            cmv=a[i+1];
        }
    }
    mn=cmn;
    mv=cmv;
    int i=0;
    if (mn==0)
    {
        sn=1;
        i++;
    }
    for(int i=0;i<19;i++)
    {
        if(a[sn]<a[i+1])
        {
            if ((i+1)==mn);
            else {
                sn=i+1;
                sv=a[i+1];
            }
        }
    }
    printf("第二大整数号码%d,第二大整数的值%d,最大整数号码%d,最大整数的值%d",sn,sv,mn,mv);
}

