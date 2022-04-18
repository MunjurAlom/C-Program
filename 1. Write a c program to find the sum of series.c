/*1. Write a c program to find the sum of series
1^3+2^3+.......+n^3
Sample Output:
Enter any number:5
The sum of the series:224 */
#include<stdio.h>
main()
{
int i,n,sum=0;
printf("Enter any number: ");
scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i*i*i;
	}
	printf("Sum of the series :%d",sum);
}
