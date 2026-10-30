#include<stdio.h>
int main(void)
{
    int a,b;
    printf("enter two integer:");
    scanf("%d%d",&a,&b);
    printf("sum=%d\n",a+b);
    printf("diff=%d\n",a-b);
    printf("product=%d\n",a*b);
    if(b!=0)
    {
        printf("ouotient=%d\n",a/b);
        printf("reminder=%d\n",a%b);
    }
    else
    {
        printf("division and reminder cannot be performed because the second integer is zero,\n");
    
    }
      return 0;
}    