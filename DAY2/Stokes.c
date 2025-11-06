#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter n value\n");
    scanf("%d",&n);
    float prices[n];
    for (int  i = 0; i <n; i++)
    {
        printf("Enter For Day %d->",i+1);
        scanf("%f",&prices[i]);
        printf("\n");
    }
    float min_price=prices[0];
    float max_price=INT_MIN;

    for(int i=1;i<n;i++){
        if(prices[i]<min_price){
            min_price=prices[i];
        }
        if(prices[i]>max_price){
            max_price=prices[i];
        }
    }
    printf("MAX=%f",max_price);
    printf("\nMIN=%f",min_price);
    
}

// MAXIMUM PROFIT

