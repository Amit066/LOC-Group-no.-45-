#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    do{
        sum+=num%10;
        num/=10;
    }while(num!=0);
    printf("Sum is %d",sum);
    return 0;
}
