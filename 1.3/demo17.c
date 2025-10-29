#include <stdio.h>
int main(){
    int shuru;
    int ge,shi,bai,qian,wan;
    printf("请输入一个整数：");
    scanf("%d",&shuru);
    if(shuru/10==0){
        printf("原数字");
        printf("%d",shuru);
        printf("这是一位数");
        printf("这是反序");
        printf("%d",shuru);
    } else if (shuru/100==0){
        ge=shuru%10;
        shi=shuru/10%10;
        printf("原数字");
        printf("%d%d",shi,ge);
        printf("这是两位数");
        printf("这是反序");
        printf("%d%d",ge,shi);
    } else if(shuru/1000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        printf("原数字");
        printf("%d%d%d",bai,shi,ge);
        printf("这是三位数");
        printf("这是反序");
        printf("%d%d%d",ge,shi,bai);
    } else if(shuru/10000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        bai=shuru/100%10;
        qian=shuru/1000%10;
        printf("原数字");
        printf("%d%d%d%d",wan,qian,shi,ge);
        printf("这是四位数");
        printf("这是反序");
        printf("%d%d%d%d",ge,shi,qian,wan);
    } else if(shuru/100000==0){
        ge=shuru%10;
        shi=shuru/10%10;
        bai=shuru/100%10;
        qian=shuru/1000%10;
        wan=shuru/10000%10;
        printf("原数字");
        printf("%d%d%d%d%d",wan,qian,shi,bai,ge);
        printf("这是五位数");
        printf("这是反序");
        printf("%d%d%d%d%d",ge,bai,shi,qian,wan);
    } 
    return 0;
    //老师我认为我这种方式更简单，用switch还得分两步，但是我这个只需要一步就能完成

}
