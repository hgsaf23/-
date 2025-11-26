#include <stdio.h>
void chazhao(int num){
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int weizhi=0;
    for (int i = 0 ; i < 15 ; i++){
        if(arr[i] == num){
            weizhi = i;
            printf("%d", weizhi);
            break;
        }
    }
    
    if (!weizhi) { 
        printf("No Found\n");
    }
}
int main() {
    
    int a;
    printf("请输入一个数字：");
    scanf("%d",&a);
    chazhao(a);
    return 0;
}