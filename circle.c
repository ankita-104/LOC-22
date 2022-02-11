//WAP to enter the radius of a circle and find its diameter, circumference and area.

#include<stdio.h>
#include<math.h>

int main()

{
    float radius, diameter, circumference, area;

    printf("Enter the radius of the circle:\n");
    scanf("%f\n\n", &radius);

    diameter=(radius*2);
    printf("Diameter of the circle is: %f\n", diameter);

    circumference=(3.14*diameter);
    printf("Circumference of the circle is: %f\n", circumference);

    area=3.14 * pow(radius,2);
    printf("Area of the circle is:%f\n", area);

    
       return 0;

}