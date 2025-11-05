#include <stdio.h>

double zuizhong(int day);
double zongshu(int day);

int main(){
    int day = 30;
    double result = zuizhong(day);
    double result2 = zongshu(day);
    printf("陌生人得到：%f",result2);
    printf("富人得到：%d",30*100000);
    return 0;
}

double zuizhong(int day){
    if (day==1){
        return 0.01;
    }
    return zuizhong(day-1)*2;
}

double zongshu(int day){
    if (day==1){
        return 0.01;
    }
    return zongshu(day-1) + zuizhong(day);
}
