#include <stdio.h>
int main(){
    int shuru;
    int ge,shi,bai,qian,wan;
    printf("请输入一个整数：");
    scanf("%d",&shuru);
    if(shuru/10==0){
        printf("%d",shuru);
    } else if (shuru/100==0){
        ge=shuru%10;
        shi=shuru/10%10;
        printf("%d%d",ge,shi);
    } else if(shuru/1000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        bai=shuru/100%10;
        printf("%d%d%d",ge,shi,bai);
    } else if(shuru/10000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        bai=shuru/100%10;
        qian=shuru/1000%10;
        printf("%d%d%d%d",ge,shi,bai,qian);
    } else if(shuru/100000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        bai=shuru/100%10;
        qian=shuru/1000%10;
        wan=shuru/10000%10;
        printf("%d%d%d%d%d",ge,shi,bai,qian,wan);
    } 
    return 0;
    
}