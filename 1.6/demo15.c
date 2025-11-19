#include <stdio.h>
void hanshu(int str[2][2]);
int main(){
    int str[2][2] = {{1,2},{3,4}};
    hanshu(str);
    return 0;
}

void hanshu(int str[2][2]){
    printf("原来数组数据");
    printf("%d,", str[0][0]);
    printf("%d\n", str[0][1]);
    printf("%d,", str[1][0]);
    printf("%d\n", str[1][1]);
    int temp = 0;
    temp = str[0][0];
    str[0][0] = str[0][1];
    str[0][1] = temp;
    temp = str[1][0];
    str[1][0] = str[1][1];
    str[1][1] = temp;
    printf("经过交换后的数据");
    printf("%d,", str[0][0]);
    printf("%d\n", str[0][1]);
    printf("%d,", str[1][0]);
    printf("%d\n", str[1][1]);
}