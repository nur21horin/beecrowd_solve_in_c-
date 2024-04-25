#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int n=0,i,t,c=1;
    char a[100];
    cin>>t;//test case
    getchar();
    while(t--){
        gets(a);
        for(i=0;a[i];i++){
              if(a[i]=='a' || a[i]=='d' || a[i]=='g' || a[i]=='j' || a[i]=='m' || a[i]=='p' || a[i]=='t' || a[i]=='w'|| a[i]==' ')
                n+=1;
            else if(a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q'|| a[i]=='u'|| a[i]=='x')
                n+=2;
            else if(a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r'|| a[i]=='v'|| a[i]=='y')
                n+=3;
            else if(a[i]=='s' || a[i]=='z')
                n+=4;

        }
        printf("Case #%d:%d\n",c,n);
        n=0;
        c++;
    }
    return 0;
    }
