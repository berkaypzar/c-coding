#include <stdio.h>

int main(){    

  
  const double pi=3.1415;
  double circumference,radius,area;

  printf("Enter the radius of circle:");
  scanf("%lf",&radius);
   circumference= 2*radius*pi;
   area = pi*radius*radius;
   printf("Circumference of the circle = %.2lf\n",circumference);
   printf("Area of the circle = %.2lf\n",area);








return 0;
}
