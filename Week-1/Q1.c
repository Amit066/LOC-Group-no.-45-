 #include<stdio.h>

int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5!=0){
            printf("\nFizz");
        }
        else if(i%5==0 && i%3!=0){
            printf("\nBuzz");
        }
        else if(i%3==0 && i%5==0){
            printf("\nFizz Buzz");
        }
        else printf("\n%d",i);
    }
    return 0;
}
