// n=5
// [1 2 3 4 5]->array
// k=2
// [3,4,5,1,2]

#include<stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    // 
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the k value\n");
    scanf("%d",&k);
    //handle cases where k>n
    k=k%n;

    int temp[k];
// 1 2 to temp
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
// 3 4 5 to starting
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
// 1 2 to end
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    


}
