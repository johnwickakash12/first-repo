#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("for_loops.txt","r");
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    return 0;
}