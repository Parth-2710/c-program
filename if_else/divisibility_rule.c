#include <stdio.h>
int main(){
    int x;
    printf("enter the value ");
    scanf("%d",&x);
    if(x%5==0 && x%3==0){
        printf("the number is divisible");
    }
    else{
        printf("the number is not divisible");
    }
    return 0;
}