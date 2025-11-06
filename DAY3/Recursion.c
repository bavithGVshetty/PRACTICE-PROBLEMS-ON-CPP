#include<stdio.h>
int countWays(int n){
    if(n==0||n==1){
        return 1;
    }
    return countWays(n-1)+countWays(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    int  result=countWays(n);
    printf("THE NUMBER OF WAYS=%d",result);

}