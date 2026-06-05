#include <stdio.h>
int main()
{
    int i = 71, sum = 0;
loop:
    if(i <= 79)
    {
        sum = sum + i;
        i = i + 2;
        goto loop;
    }
    printf("%d", sum);
    return 0;
}
