// 21.  Write a C program to find prime number or not prime.
#include<stdio.h>
main()
{
int n,i,j=0;
printf ("Enter any number: ");
scanf ("%d",&n);
for (i=2;i<=n;i++)
{
    if (n%i==0)
    j++;
}
if (j==1)
   printf("Number is prime");
   else
   printf("Number is not prime");
}
