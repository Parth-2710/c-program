#include<stdio.h>
int main(){
    int x;
    printf("enter a year : ");
    scanf("%d",&x);
    if(x%4==0){
        printf("leap year");
    }
    else{
        printf("normal year");
    }
    return 0;


}