#include <stdio.h>

int main() {
    float radius, volume;
    const float pi = 3.14159265359;

    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("The volume of sphere is %.6f\n", volume);

    return 0;
}
