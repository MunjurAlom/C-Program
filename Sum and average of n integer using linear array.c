/* 1. a) Find the sum and average of n integer using liner array.
Sample Output:
Enter the number of elements:10
Enter elements:1
2
3
4
....
10

Sum of 10 elements is 55
Average of 10 elements is 5.000000 */
#include<stdio.h>
main()
{
    int i,n,array[100],sum=0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    sum=sum+array[i];
    }
    average=(float)sum/n;
    printf("Sum of the %d elements is %d\n",n,sum);
    printf("Average of the %d elements is %.3f",n,average);

}



