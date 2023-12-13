#include<stdio.h>
int main(){
    int n;
    printf("enter a no- ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 0;
    for(int i=1;i<=n;i++){    
        sum = a + b;
        printf("fibonnaci value of %d is %d\n",i,a);
        a=b;  
        b=sum;    
      }
    
    return 0;
}