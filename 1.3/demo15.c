#include <stdio.h>
int shuixian(int shuru);

int main() {
    int shuru;
    printf("请输入一个数字：");
    scanf("%d", &shuru);
    if(shuixian(shuru)){
        printf("%d是水仙花数", shuru);
    }else{
        printf("%d不是水仙花数", shuru);
    }
}

int shuixian(int shuru){
    int ge,shi,bai,sum;
    bai=shuru/100;
    shi = (shuru%100)/10;
    ge = shuru%10;
    sum = ge*ge*ge+shi*shi*shi+bai*bai*bai;
    if(shuru == sum) {
        return 1;
    } else {
        return 0;
    }

}