#include <stdio.h>
int hanshu();
int main(){
    hanshu();
    return 0;
}

int hanshu(){
    //一到一百所有数字
    for (int i = 10; i < 100;i++){
        if(i%3==0&&(i/10==5||i%10==5)){
                printf("%d ",i);
        }
    }
    return 0;
}