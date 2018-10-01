#include<stdio.h>

void Insert(char *str, int pos, char *subStr){
    int subStrLen=0, strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    while(subStr[subStrLen]!='\0') subStrLen++;
    for(i=strLen; i>=pos; i--) str[i+subStrLen]=str[i];
    for(i=pos; i<pos+subStrLen; i++) str[i]=subStr[i-pos];
}

int main(){
    char str[100]="effort is really important but even more is to know where to effort", subStr[100]="important ";
    int pos=41;
    Insert(str, pos, subStr);
    printf("%s\n", str);
    return 0;
}
