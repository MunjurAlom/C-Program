/* d. Write a c program to read three values using scanf statement and point the following result:-
a. sum of the values
b. Average of three values
c. Largest of three values
d. smallest of three values  */
#include<stdio.h>
main()
{
    float a,b,c,sum,average;
    printf("Enter any three values: ");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    printf("Sum of the three values:%.0f\n",sum);
    average=sum/3;
    printf("Average of the three values:%.3f\n",average);
    if((a>=b) && (a>=c))
        printf("The largest number:%.3f\n",a);
    else if((b>=a) && (b>=c))
        printf("The largest number:%.3f\n",b);
    else

       printf("The largest number:%.3f\n",c);


if((b>=a) && (c>=a))
        printf("The smallest number:%.3f",a);
    else if((a>=b) && (c>=b))
        printf("The smallest number:%.3f",b);
    else

       printf("The smallest number:%.3f",c);
}
