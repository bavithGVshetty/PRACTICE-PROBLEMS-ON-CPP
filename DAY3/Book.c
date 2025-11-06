// 
// Arranged 1 to n(bottom to top)

#include<stdio.h>

int countBooks(int current,int target){
    if(current==target){
        return 1;
    }
    return 1+countBooks(current-1,target);
}
int main(){
    int n,target;
    scanf("%d %d",&n,&target);
    int result=countBooks(n,target);
    printf("THE POSITION=%d",result);
}