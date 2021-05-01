#include<stdio.h>
int main(){
    int a;
    int *ptr;
    a=54;
    ptr=&a;
    printf("the address of "+*ptr);
    return 0;
}