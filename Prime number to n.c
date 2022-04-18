// 20. Write a C program to find prime number in n.
#include<stdio.h>

 main()
{
   int n,i=0,t=0;

   printf("Enter the number: ");
   scanf("%d",&n);
   printf("prime number are:");
   for (i=2;i<=n;i++)
   {
       for (t=2;t<=i;t++)
       {
           if (i%t==0)
            break;
       }

       if (i==t)
        printf("%d\n",i);

   }
}
