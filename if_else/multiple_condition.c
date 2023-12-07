#include <stdio.h>
int main (){
    int x;
    printf("enter the value ");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("three digit number");
    }
    else{
        printf("not a three digit number");
    } 
    return 0;
}