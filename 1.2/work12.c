#include <stdio.h>
#include <math.h>
int main() {
    printf("输入圆的半径: ");
    double r;
    scanf("%lf", &r);
    double pi = 3.14159265358979323846;
    double area = pi * r * r;
    double perimeter = 2 * pi * r;
    printf("面积: %lf\n", area);
    printf("周长: %lf\n", perimeter);
}
