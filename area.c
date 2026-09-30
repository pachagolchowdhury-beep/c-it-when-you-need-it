#include <stdio.h>
int main(){
    {
        float length, breadth, radius, area;
        printf("Enter length: %f", length);
        scanf("%f", &length);
        printf("Enter breadth: %f", breadth);
        scanf("%f", &breadth);
        printf("Enter radius: %f", radius);
        scanf("%f", &radius);
        printf("Enter choice (1-3): ");
        scanf("%f", &area);
        switch((int)area){
                case 1:
                    area = length * breadth;
                    printf("Area of rectangle: %f", area);
                    break;
                case 2:
                    area = 3.14 * radius * radius;
                    printf("Area of circle: %f", area);
                    break;
                case 3:
                    area = 3*length;
                    printf("Area of triangle: %f", area);
                    break;
                default:
                    printf("Invalid choice");
            }
    }
}