// Pointers

// Poniter array
// int a=10;
//  int *p =&a;

#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};

    int *p=arr;
    // Pointer arithmatic
    printf("points to: %d",*p);
    p++;
    printf("\npoints to: %d\n",*p);

    for (int i = 0; i <5; i++)
    {
       printf("The value : %d \n",*(p+i));
    }
    
    


}