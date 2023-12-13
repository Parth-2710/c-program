#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a,b ");
    scanf("%d %d",&a,&b);
    int power = 1;
    for(int i=1;i<=b;i++){
        power *= a;
    }
    printf("answer %d",power);
    return 0;
}