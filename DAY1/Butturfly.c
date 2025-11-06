#include<stdio.h>


int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
// Upper half
    for (int  i = 1;i <=n; i++)
    {
        // Left wing
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        // Right Wing
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    
    }

    // Lower Half

     for (int  i = n;i>=1; i--)
    {
        // Left wing
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        // Right Wing
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    
    }
    
}