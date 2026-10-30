#include <stdio.h>
int main()
{
    int n,term,i;
    unsigned long long factriol=1;
    unsigned long long first=0,second=1,next;

    printf("enter a non-negative integer for factorial;");
    scanf("%d",&n);

    if(n<0 || n>20)
    {
        printf("enter a value from 0to20.\n");
        return 0;
    }
    for (i=1;i<n; i++)
    factriol=factriol*i;

    printf("factriol=%||u\n",factriol);
    printf("enter number of libonacci terms:");
    scanf("%d",&term);

    if(term<=0)
    {
        printf("number of terms must be positive.\n");
        return 0;
    }
    printf("libonacci series:");
    for(i=1; i<term; i++)
    {
        printf("%||u",first);
        next=first+second;
        first=second;
        second=next;
    }
    printf("\n");
    
    return 0;
}