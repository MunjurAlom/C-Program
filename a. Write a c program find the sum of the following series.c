
/* a. Write a c program find the sum of the following series :-
1+2+3+......+n  */
#include<stdio.h>
main()
{
int i,n,sum=0;
printf("Enter any number: ");
scanf("%d",&n);
for (i=1;i<=n;i=i++)
{
    sum=sum+i;
}
    printf("The Sum of the series:%d",sum);

}
