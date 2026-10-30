 #include <stdio.h>
 int main(void)
 {
    long long n,temp,digit,revers=0,sum=0;
    int count=0;

    printf("enter a positive integer");
    scanf("%11d",&n);

    if(n<=0)
    {
        printf("please enter a positive integer.\n");
        return 0;
    }
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        count++;
        sum=sum+digit;
        revers=revers*10+digit;
        temp=temp/10;
    }
    printf("number of digit=%d\n",count);
    printf("sum of digit=%d\n",sum);
    printf("revers of digit=%d\n",revers);

    if(revers==n)
       printf("%11d is not palindrome.\n",n);
    else
       printf("%11d is not palindrome.\n",n);

       return 0;
 }