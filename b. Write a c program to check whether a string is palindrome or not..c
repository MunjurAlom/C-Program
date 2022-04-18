/* b. Write a c program to check whether a string is palindrome or not. */
#include<stdio.h>
main()
{
char n,a[30],b[30];
printf("Enter the string: ");
gets(a);
n=strlen(a);
printf("The length of string:%d\n",n);
strcpy(b,a);
strrev(b);
if (strcmp(a,b)==0)
printf("Entered string is palindrome.");
else
printf("Entered string is not palindrome.");

}
