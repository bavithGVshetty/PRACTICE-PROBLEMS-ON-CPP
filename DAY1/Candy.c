#include<stdio.h>

int main(){
    long long number;
    scanf("%lld",&number);
    int count=0;
    while (number>0)
    {
        if(number%10==4){
            count++;
        }
        number=number/10;
    }
    printf("%d\n",count);
    
    return 0;

}