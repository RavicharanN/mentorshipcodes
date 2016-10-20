
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    i=2;
    while(n%i!=0&&i<=sqrt(n))
    {        i++;
    }
    if(i>sqrt(n))
    {
        printf("prime\n");
    }
    else
        printf("not prime\n");
    return 0;
}
