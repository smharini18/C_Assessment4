#include <stdio.h>
int main() 
{
    int i,odd;
    i=6;
    loop:if(i<60)
    {
        i=i+18;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}
