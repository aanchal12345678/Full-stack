#include <stdio.h>
void main()
{
    int a, b;
    printf("enter the value of a,b=");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
}