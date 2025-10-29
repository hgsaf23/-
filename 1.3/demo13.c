#include <stdio.h>

int main() {
    int a,b;
    int xue;
    printf("请输入你的性别和体重: 性别男1女2");
    scanf("%d,%d", &a, &b);
    if (a == 1) {
        if(b < 120){
            xue = 180;
        } else{
            xue = 200;
        }
    } else {
        if(a == 2){
            if(b < 100){
                xue = 120;
            } else{
                xue = 150;
            }
        }
    }
    printf("你应该输血量: %d", xue);

}