#include <stdio.h>
int check(int x, int y, int n);
int main(){
    int result;
    int x, y, n;
    printf("Enter x, y, n: ");
    scanf("%d%d%d", &x, &y, &n);
    result =  check(x, y, n);
    printf("Result: %d", result);
    return 0;
}

int check(int x, int y, int n){
    if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1) {
        return 1;
    } else {
        return 0;
    }
}