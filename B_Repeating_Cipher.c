#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[11]={1,2,4,7,11,16,22,29,37,46,55};
    char s[56];
    
    for(int i=1; i<=n; i++){
        scanf("%s",&s[i]);
    }
    for(int i=0; i<=10; i++){
        if(a[i]<=n)
        printf("%c",s[a[i]]);
    }
}