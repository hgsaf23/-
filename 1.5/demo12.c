#include <stdio.h>

int main(){
    void maopao(int shulie[]);
    void xuanze(int shulie[]);
    int shulie1[] = {3,2,5,3,4,1,8,3,5,1,8,6,3};
    int shulie2[] = {3,2,5,3,4,1,8,3,5,1,8,6,3};
    maopao(shulie1);
    xuanze(shulie2);
    return 0;
}

void maopao(int shulie[]){
    int i,j,temp;
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            if(shulie[i]<shulie[j]){
                temp = shulie[i];
                shulie[i] = shulie[j];
                shulie[j] = temp;
            }
        }
    }
    printf("冒泡排序后：");
    for(i=0;i<12;i++){
        printf("%d ",shulie[i]);
    }
    printf("\n");
}

void xuanze(int shulie[]){
    int i, j, max_index,temp;
    for(i=0;i<12;i++){
        max_index = i;
        for(j=i+1;j<12;j++){
            if(shulie[j]>shulie[max_index]){
                max_index = j;
            }
        }
        if(max_index!=i){
            temp = shulie[i];
            shulie[i] = shulie[max_index];
            shulie[max_index] = temp;
        }
    }
    printf("选择排序后：");
    for(i=0;i<12;i++){
        printf("%d ",shulie[i]);
    }
    
}
