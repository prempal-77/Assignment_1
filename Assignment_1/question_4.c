//WAP find the the area of a circle (taking radius by the user)
#include<stdio.h>
int main()
{
          float radius,area;
          printf("Enter the radius of circle:");
          scanf("%f",&radius);
          area=3.14*radius*radius;
          printf("Area of circle is %.2f and the radius %.2f",area,radius);
          return 0;
}