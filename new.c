#include <stdio.h>


int main() {
    int choice;
    float radius, length, width, side, base, height,side1, side2, side3;
    float area, perimeter;

   
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    printf("Choose one shape from above: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:  //rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);

            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            
            printf("Area of rectangle: %f\n", length * width);
            printf("Perimeter of rectangle: %f\n", 2 * (length + width));

            break;
        
        case 2:// Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);

            printf("Area of circle: %f\n", 3.14*radius*radius);
            printf("Perimeter of circle: %f\n", 2*3.14*radius);

            break;
         // Rectangle
           
        case 3: // Triangle
            printf("Enter base of triangle:\n");
            scanf("%f", &base);

            printf("Enter height of triangle:\n");
            scanf("%f", &height);

            printf("Enter three side1 of triangle:\n");
            scanf("%f", &side1);

            printf("Enter three side2 of triangle:\n");
            scanf("%f", &side2);

            printf("Enter three side3 of triangle:\n");
            scanf("%f", &side3);

            printf("Area of triangle: %f\n", (base*height)/2);
            printf("Perimeter of triangle: %f\n", side1+side2+side3);

            break;

        case 4: // Cube
            printf("Enter side of Cube: ");
            scanf("%f", &side);

            printf("TSA of Cube: %f\n", 6*side );
            printf("Volume of Cube: %f\n", side*side*side );


            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}