//WAP to reverse a string using pointer/index method.
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
for(;*p!='\0';p++);
p--;
while(s<p){
    t=*s;
    *s=*p;
    *p=t;
    s++;
    p--;
}
printf("%s\n",ptr);
}