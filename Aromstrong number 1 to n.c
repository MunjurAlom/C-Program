
#include<stdio.h>
main()
{
    int i,n,r,sum;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Armstrong number 1 to 500 are: ");
    for (i=1;i<=n;i++)
    {
        n=i;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(i==sum)
        printf("\t%d",i);
    }
}
