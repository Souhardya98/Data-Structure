#include<stdio.h>

void Delete(char *str, int pos, int len){
    int strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    for(i=pos; i<=strLen-len; i++) str[i]=str[i+len];
}

int main(){
    char str[100]="effort is really important but even more important is to know where to effort";
    int pos=41, len=9;
    Delete(str, pos, len);
    printf("%s\n", str);
    return 0;
}
