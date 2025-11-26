#include <stdio.h>
#include <string.h>
void hanshu(char str[]){
    char *p;
    p = str;
    int wz1,wz2,wz3;
    for(int i=0;i<strlen(str);i++){
        if(*p=='f'){
            wz1 = i;
            if(*(p+1)=='o'){
                wz2 = i+1;
                if(*(p+2)=='o'){
                    wz3 = i+2;
                    *p = 'x';
                    *(p+1) = 'x';
                    *(p+2) = 'x';
                };
            };
        }
        p++;
    };

    printf("修改后字符串：%s\n",str);

}
int main() {
    char str1[20] = {"hello fool"};
    hanshu(str1);
    return 0;

}