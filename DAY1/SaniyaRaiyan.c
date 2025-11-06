#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int count100=N/100;
    N=N%100;
    int count50=N/50;
    N=N%50;
    int count20=N/20;
    N=N%20;
    int count10=N/10;
    N=N%10;
    int count5=N/5;
    N=N%5;
    int count2=N/2;
    N=N%2;

    int count1=N;

    int totaNotes=count100+count50+count20+count10+count2+count1;
    printf("%d\n",totaNotes);

}