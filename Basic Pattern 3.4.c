#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n];
for(i=n;i>0;i--){
char ch='A'+(i-1);
for(j=0;j<i;j++){
printf("%c ",ch);
}
printf("\n");
}
return 0;}