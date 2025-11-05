#include <stdio.h>

int main(){
    printf("输入两个正整数：");
    int a,b;
    scanf("%d%d",&a,&b);
    int max,min=0;
    if(a>b){
        max = a;
    } else {
        max = b;
    }
    int gongyueshu = 0;
    if(a> 0&&b>0){
        for(int i = 1; i <max;i++){
            if(a%i ==0 && b%i ==0){
                gongyueshu = i;
            }
        }
        printf("最大公约数为：%d",gongyueshu);
        if (max%min==0){
            printf("最小公倍数为：%d",max);
        } else {
            printf("最小公倍数为：%d",max*min/gongyueshu);
        }
    } else {
        printf("输入的数字不合法");
    }
}