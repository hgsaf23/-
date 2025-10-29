#include <stdio.h>

int main(){
    double chengji;
    int dengji;
    if(chengji>=90){
        dengji=4;
    } else if(chengji>=80 && chengji<90){
        dengji=3;
    } else if(chengji>=70 && chengji<80){
        dengji=2;
    } else if(chengji>=60 && chengji<70){
        dengji=1;
    } else {
        dengji=0;
    }
    scanf("%lf", &chengji);
    switch(dengji){
        case 4:
            printf("A");
            break;
        case 3:
            printf("B");
            break;
        case 2:
            printf("C");
            break;
        case 1:
            printf("D");
            break;
        case 0:
            printf("E");
            break;
        default:
            printf("输入错误");
            break;
    }

}