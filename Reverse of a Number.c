#include<stdio.h>
int main(){
int i,a,rev=0;
scanf("%d",&a);
for(i=a;i!=0;i/=10){
    rev=rev*10+i%10;


}
printf("%d",rev);
return 0;}