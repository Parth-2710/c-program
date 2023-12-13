#include<stdio.h>
int main (){
    int x = 7,y,z;
    y =--x;//--x means use x then decrement
    z=x--; //x-- means decrement then use
    printf("\n%d %d %d",x,y,z);
    return 0;

}