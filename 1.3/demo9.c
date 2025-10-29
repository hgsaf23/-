#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    float s,area;
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a) {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("三角形面积为：%f\n",area);
        if(a==b&&b==c) {
            printf("三角形类型：等腰直角三角形\n");
        } else if(a==b||b==c||c==a) {
            printf("三角形类型：等边三角形\n");
        } else {
            printf("三角形类型：普通三角形\n");
        }
    } else {
        printf("不能组成三角形\n");
    }
    return 0;
}
