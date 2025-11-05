#include <stdio.h>

int hanshu(int tianshu);

int main(){
    int tianshu = 1;
    int sum = 0;
    sum = hanshu(tianshu);
    printf("巧克力数量：%d",sum);
    return 0;
}

int hanshu(int tianshu){

    if(tianshu == 10){
        return 1;
    }
    return (hanshu(tianshu+1)+1)*2;

}