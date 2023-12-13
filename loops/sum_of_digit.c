#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int sum = 0;
    int ld = x%10;
    while(x!=0){ 
        ld = x%10;
        sum = sum +ld;
        x = x/10;
    }
    printf("the sum of digits os %d",sum);

    return 0; 
}