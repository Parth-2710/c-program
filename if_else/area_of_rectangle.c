#include <stdio.h>
int main (){
    int l,b;
    printf("enter the value of l ");
    scanf("%d",&l);
    printf("enter the valueof b ");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is smaller than perimeter");
    }
    return 0;
    

}