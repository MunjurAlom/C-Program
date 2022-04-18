/* d. Write a c program to read three values using scanf statement and point the following result:-
a. sum of the values
b. Average of three values
c. Largest of three values
d. smallest of three values  */
#include<stdio.h>
main()
{
    float a,b,c,sum,max,slm,average;
    printf("Enter the values: ");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    printf("Sum of the values:%.2f\n",sum);
    average=((a+b+c)/3);
    printf("Average of three values:%.2f\n",average);
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    else
        {
        max=max;
    }
    printf("Largest of three values:%.2f\n",max);

    if (a>b)
    {
        slm=b;
    }
    else
    {
        slm=a;
    }
    if (slm>c)
    {
        slm=c;
    }
    else
        {
        slm=slm;
    }
    printf("Smallest of three values:%.2f",slm);
}

