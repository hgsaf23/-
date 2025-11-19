int mystrlen(char str[ ])
{ int i;
for(i=0; str[i]!='\0';i++);
return(i);
}
int main ( )
{

    char str[100];
    int len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = mystrlen(str);
    printf("The length of the string is: %d", len);
return 0;
}