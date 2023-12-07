#include <stdio.h>
int main (){
    int cp,sp;
    printf("enter the sp ");
    scanf("%d",&sp);
    printf("enter the cp ");
    scanf("%d",&cp);
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("loss");
    }
    return 0;
}