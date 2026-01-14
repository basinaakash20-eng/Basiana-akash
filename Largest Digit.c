#include<stdio.h>
int main(){
int n,max=0,z;
scanf("%d",&n);
for(int i=n;i>0;i/=10){
z=i%10;
if(z>max){
    max=z;
}
}
printf("%d",max);
}