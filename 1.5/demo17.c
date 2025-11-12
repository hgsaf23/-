#include <stdio.h>
double digui(int n);
double lucheng(int n);
int main() {
    int cishu = 10;
    printf("总路程是%f", lucheng(cishu));
    printf("第%d次高度为%f:",cishu,digui(cishu));
    return 0;
}

double digui(int n) {
    double height = 0;
    if (n == 0) {
        return 100;
    }
    return digui(n-1)/2;
}

double lucheng(int n) {
    double sum = 0;
    if(n == 0){
        return 100;
    }
    return lucheng(n-1) + digui(n-1)*2;
}

