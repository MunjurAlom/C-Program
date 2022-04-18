/* 2. Write a c program to find below particulars between integers 1 to n:-
  i. Find the number of odd values
 ii. Calculate the sum of odd numbers
iii. Find the number of even values
 iv. Calculate the sum of even numbers

 Sample Output:
 Enter the the number of elements:10
 Enter elements:9 2 5 4 12 7 321 23 456 80

 Number of odd values:5
 The sum of odd numbers:365
 Number of even values:5
 The sum of even numbers:554  */
#include<stdio.h>
main()
{
    int i,n,array[30],sum_odd=0,sum_even=0,count_odd=0,count_even=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<n;i++)
    {
    scanf("%d",&array[i]);

    if (array[i]%2==0)
    {
        sum_even=sum_even+array[i];
        count_even++;
    }
    else
    {
        sum_odd=sum_odd+array[i];
        count_odd++;
    }
    }

    printf("Number of odd values:%d\n",count_odd);
    printf("The sum of odd numbers:%d\n",sum_odd);
    printf("Number of even values:%d\n",count_even);
    printf("The sum of even numbers:%d\n",sum_even);

}

