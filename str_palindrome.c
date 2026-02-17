//WAP to check string is palindrome or not.
#include<stdio.h>
int palindrome(char *);

int main(){
int c;
char s[20];
printf("Enter the string\n");
scanf("%s",s);
c=palindrome(s);
if(c==1)
printf("palindrome %s\n",s);
else
printf("not\n");
return 0;
}
int palindrome(char *s){
    char *ptr=s;
    int i,j;
    for(i=0;s[i]!='\0';i++);
    i--;
    for(j=0;j<i;j++,i--){
        if(s[j]!=s[i])
        return 0;
    }
    return 1;
}

