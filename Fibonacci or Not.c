#include <stdio.h>

int main() {
    int a = 0, b = 1, c;
    int d;

    scanf("%d", &d);
if(d=0 || d=1){
    printf("True");
 return 0;
}
for(a=0;;a++){
    c=a+b;
    if(c=d){
        printf("True");
        break;
        }
        if (c > d) {
            printf("False");
            break;
        }

        a = b;
        b = c;
    }

    return 0;
}
    