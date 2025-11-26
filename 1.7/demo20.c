#include <stdio.h>
void panduan(char str1[], char str2[]){
    char *p1, *p2;
    p1 = str1;
    p2 = str2;
    while(*p1!= '\0' && *p2!= '\0'){
        if(*p1!= *p2){
            printf("字符串不相等！\n");
            return;
        }
        p1++;
        p2++;
    }
     if (*p1 == '\0' && *p2 == '\0') {
        printf("字符串相等！\n");
    } else {
        printf("字符串不相等！\n");
    }
}
int main(){
    printf("输入两行字符串:\n");
    char str1[100], str2[100];
    scanf("%s\n%s", str1, str2);
    panduan(str1, str2);
    return 0;
}
