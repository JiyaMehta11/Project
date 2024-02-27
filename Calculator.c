#include<stdio.h>
int main(){
    int a,b,num;
    printf("Enter a : \n");
    scanf("%d",&a);
    printf("Enter b : \n");
    scanf("%d",&b);
    printf("Enter 1 for addition.\n");
    printf("Enter 2 for subtraction.\n");
    printf("Enter 3 for multiplication.\n");
    printf("Enter 4 for division.\n");
    scanf("%d",&num);
    if(num==1){
    printf("Addition of a and b gives %d",a+b);}
    else if(num==2){
    printf("Subtraction of a and b gives %d",a-b);}
    else if(num==3){
    printf("Multiplication of a and b gives %d",a*b);}
    else if(num==4){
    printf("Division of a and b gives %d",a/b);}
    else{
        printf("Invalid Input");
    }

    return 0;
}