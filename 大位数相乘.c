#include <stdio.h>
struct grid{
    int value;
    int low;
    int high;
};
int main(void)
{
    for(int j=0;j<m;j++)
    {
        for(int i=j+1;i<s+t+1 ;i++)
        {
            c[j][i]->value=b[j]*a[i-1]+c[j][i-1]->high;
            c[j][i]->low=c[j][i]%10;
            c[j][i]->high=(int)(c[j][i]/10);
        }
    }

}
