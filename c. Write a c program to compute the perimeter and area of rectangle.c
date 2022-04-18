/* c. Write a c program to compute the perimeter and area of rectangle with a height of 7 inches and width of 5 inches.  */
#include<stdio.h>
main()
{
    int h=7,w=5;
   int area,perimeter;
    perimeter=2*(h+w);
    printf("Perimeter of the rectangle= %d inches\n",perimeter);
    area=h*w;
    printf("Area of the rectangle= %d square inches",area);

}
