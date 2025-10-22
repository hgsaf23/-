#include <stdio.h>

int main() {
    int max(int x,int y);
    int a, b, c, num;
    printf("输入三个数 ");
    scanf("%d%d%d", &a, &b, &c);
    num = max(max(a,b),c);
    printf("最大数是: %d", num);
    return 0;
}

int max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}