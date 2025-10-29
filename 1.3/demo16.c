#include <stdio.h>
int main(){
    int dixin = 500;
    int p;
    int sum;
    printf("请输入利润:");
    scanf("%d", &p);
    if(p <= 1000){
        printf("利润小于等于1000，不发工资！");
    }
    else if(p > 1000 && p <= 2000){
        sum = dixin + p * 0.1;
    } else if (p > 2000 && p <= 5000){
        sum = dixin + p * 0.15;
    } else if (p > 5000 && p <= 10000){
        sum = dixin + p * 0.2;
    } else if (p > 10000){
        sum = dixin + p * 0.25;
    }
    printf("工资为：%d", sum);
    return 0;
}