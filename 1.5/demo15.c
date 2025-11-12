#include <stdio.h>
#include <string.h>
void zhuanhuan(char shulie[]);
int main(){
    
    printf("请输入字符串：");
    char str[100];
    scanf("%s", str);
    printf("原字符串：%s", str);
    zhuanhuan(str);
    printf("转换后的字符串：%s", str);
    return 0;
}

void zhuanhuan(char shulie[]){
    int i,j,temp;
    for(i=0;i<strlen(shulie)-1;i++){
        for(j=i+1;j<strlen(shulie);j++){
            if(shulie[i]>shulie[j]){
                temp=shulie[i];
                shulie[i]=shulie[j];
                shulie[j]=temp;
            }
        }
    }

}
