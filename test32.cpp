#include <iostream>
using namespace std;
bool  strcheck(const char *a,const char *b)
{
    while(*a++==*b++)
    {
        if (*(a-1)=='\0')
        {
            return true;
        }
    }
    return false;
}
int main(void)
{
    char *a="hellobike";
    char  *b="hellobike";
    printf ("%d",strcheck(a,b));
}
