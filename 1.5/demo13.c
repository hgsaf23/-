#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int num_count=0,zimu_count=0,other_count=0,kongge_count=0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if(str[i] >= '0' && str[i] <= '9'){
            num_count++;
        } else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            zimu_count++;
        } else if(str[i] == ' '){
            kongge_count++;
        } else {
            other_count++;
        }
        
    }
    printf("数字个数：%d\n", num_count);
    printf("字母个数：%d\n", zimu_count);
    printf("空格个数：%d\n", kongge_count);
    printf("其他字符个数：%d\n", other_count);
    return 0;
}