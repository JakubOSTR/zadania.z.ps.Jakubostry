#include <stdio.h>
#include <stdlib.h>

int add(int a,int b,int c);

int main()
{
    int a = 2;
    int b = 21;
    int c = 10;

    if (a >= b && a >= c)
    {
        printf("%d \n",a);
    }

    else if(b >= a && b>= c)
    {
        printf("%d \n",b);
    }

    else if(c >= a && c >= b)
    {
        printf("%d \n",c);
    }
}
