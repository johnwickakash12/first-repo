#include<stdio.h>

int main(){
    int age;
    printf("enter your age \n");
    scanf("%d",&age);
    if(age<18){
        printf("you cannot drive\n");
    }
    else{
            printf("you can drive");
        }
    
    return 0;
}