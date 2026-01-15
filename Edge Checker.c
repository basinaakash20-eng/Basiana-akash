#include<stdio.h>
int main(){
int n,c;
scanf("%d %d",&n,&c);
if((n-c==1) || (c-n==1) || (n==1 && c==10) || (c==1 && n==10) ){
    printf("Yes");
}
else{
    printf("No");
}

}