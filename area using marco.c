/*
Author:Amala Manoj
Date:25/03/2025
//To find the area of the circle using marco*/
#include <stdio.h>
#define pi 3.142
#define area_of_circle(r) (pi*r*r)
#define surface_area_of_cylinder(r,h) (2*pi*r*(r+h))
int main()
{
float r,h,area,surface_area;
printf("Enter the radius of circle and cylinder:");
scanf("%f",&r);
printf("Enter the height of cylinder:");
scanf("%f",&h);
area=area_of_circle(r);
surface_area=surface_area_of_cylinder(r,h);
printf("The area of circle:%.2f\n",area);
printf("The surface area of the cylinder:%.2f\n",surface_area);
return 0;
}
