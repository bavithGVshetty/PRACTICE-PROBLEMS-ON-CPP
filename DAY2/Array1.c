#include<stdio.h>

int main(){
    int n,i,sum=0;
    float average;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    // Declaration of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
       sum+=arr[i];
    }
    average=(float) sum/n;

    printf("Sum=%d\n",sum);
    printf("Average=%.2f\n",average);
    
}