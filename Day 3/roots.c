#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    printf("Enter a b c: ");
    scanf("%f%f%f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d >= 0)
        printf("Roots: %.2f and %.2f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else
        printf("Complex roots\n");
    return 0;
}