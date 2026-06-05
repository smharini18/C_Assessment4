#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
loop:
    if(n > 0)
    {
        n = n / 10;
        count = count + 1;
        goto loop;
    }
    printf("%d", count);
    return 0;
}
