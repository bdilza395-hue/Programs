//WAP to reverse a string using index method.
#include<stdio.h>
void rev(char *);
int main()
{
char s[20];
printf("Enter the string\n");
scanf("%[^\n]",s);
rev(s);
return 0;
}
void rev(char *s){
    char *ptr=s;
char *p=s;
char t;
int i,j;
for(i=0;p[i]!='\0';i++);
i--;
for(j=0;j<i;j++,i--){
    t=p[j];
    p[j]=p[i];
    p[i]=t;
}
printf("%s\n",ptr);
}
int WinMain() {
    return main();
}