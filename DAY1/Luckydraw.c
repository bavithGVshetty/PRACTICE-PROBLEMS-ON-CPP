#include<stdio.h>

int main(){
    int ticket;
    scanf("%d",&ticket);
    int last_digit=ticket%10;
    if(last_digit==3||last_digit==8){
        printf("Lucky winner\n");
    }
    else{
        printf("Not a lucky winner\n");
    }
    return 0;
}