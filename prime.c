
#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    i=2;
    while(n%i!=0&&i<=(n/2))
    {        i++;
    }
    if(i>(n/2))
    {
        printf("prime\n");
    }
    else
        printf("not prime\n");
    return 0;
}
