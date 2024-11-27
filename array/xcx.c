#include <stdio.h>
#define PI 3.141  // Define the value of Pi

int main() {
    float radius, area, perimeter;

    scanf("x=%f", &radius);

    // Calculate the area of the circle (A = π * r^2)
    area = PI * radius * radius;

    // Calculate the perimeter (circumference) of the circle (C = 2 * π * r)
    perimeter = 2 * PI * radius;

    // Display the results
    printf("%f %f\n", area, perimeter);
    return 0;
}
