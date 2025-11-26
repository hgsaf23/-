#include <stdio.h>
#include <string.h>

void fanzhuan(char a[]) {
    char new[20];
    char *p1 = a;  
    char *p2 = new; 
    int len = strlen(a);
    char *end = a + len - 1;
    while (end >= a) {
        *p2++ = *end--;
    }
    *p2 = '\0'; 
    printf("反转后的字符串：%s\n", new);
}

int main() {
    char a[20];
    printf("请输入字符串：");
    scanf("%19s", a);
    fanzhuan(a);
    return 0;
}
