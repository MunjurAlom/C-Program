/* 1. b) Write a c program to count the number of digit and reverse of the number.
Sample Output:
Enter any number:347
No. of digit:3
The corresponding reverse number:743 */
#include<stdio.h>
main()
{
    int n,reverse=0,count=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n!=0)
    {
    reverse=reverse*10;
    reverse=reverse+n%10;
    n=n/10;
    count++;
    }
    printf("No. of digit:%d\n",count);
    printf("The corresponding reverse number:%d",reverse);

}



