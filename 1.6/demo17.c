#include <stdio.h>
int digit(int n, int k);
int main(){
    int result = 0;
    int n, k;
    printf("请输入n和k：");
    scanf("%d%d", &n, &k);
    result = digit(n, k);
    printf("第%d位数字是：%d", k, result);
    return 0;
}

int digit(int n, int k) {

    for (int i = 1; i < k; i++) {
        n = n / 10;  
    }
    return n % 10;   
}