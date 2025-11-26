#include <stdio.h>
#include <stdbool.h>
bool search(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            return true;
        }
    }
    return false;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 5;
    if(search(a, n, key)){
        printf("找到了");
    } else {
        printf("没找到");
    }
}