#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    scanf("%s", st);
    if(strlen(st) >= 10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
    return 0;
}