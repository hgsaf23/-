#include <stdio.h>
int hanshu(int n);
int main(){
    int shuzi;
    printf("请输入一个整数：");
    scanf("%d",&shuzi);
    if(hanshu(shuzi)){
        printf("是素数");
    }
    else{
        printf("不是素数");
    }
    return 0;
}

int hanshu(int n){
    for (int i = 2;i<n;i++){
        if (n%i==0){
            return 0;
        } else if(n==2){
            return 1;
        } else {
            return 1;
        }
    }
}