#include <stdio.h>
int main() 
{
    int i,odd;
    i=7;
    loop:if(i<61)
    {
        i=i+18;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}
