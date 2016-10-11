#include <stdio.h>
int main()
{
    float a,b,res;
    char op;
    scanf("%f%c%f",&a,&op,&b);
    switch(op)
    {
        case '+': res=a+b;
            break;
        case '-': res=a-b;
            break;
        case '*': res=a*b;
            break;
        case '/': res=a/b;
            break;
        default:
            printf("Enter valid op");
            break;
            
    }
    printf("%f",res);
    return 0;
}