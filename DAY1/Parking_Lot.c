#include<stdio.h>

int main(){
    int type;
    printf("Enter vehicle type( 1 for Car, 2 for Bike, 3 for Bus)");
    scanf("%d",&type);

    switch (type)
    {
    case 1: printf("Parking Fee: $20");
        break;
    case 2: printf("Parking Fee: $10");
    break;
    case 3: printf("Parking Fee: $30");
    break;
    default:
        break;
    }
    return 0;
}