#include <stdio.h>

int main(int argc, char *argv[]) {
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (5/9.0)*(fahrenheit-32); /*Warning: must divide by 9.0, not 9*/
    printf("%.2f degrees Celsius is %.2f degress Fahrenheit", fahrenheit, celsius);
    return 0;
}