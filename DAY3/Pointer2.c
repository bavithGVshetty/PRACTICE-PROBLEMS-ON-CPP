#include<stdio.h>

int main(){
    char *fruits[]={"Guava","Jackfruit","Banana"};

    for(int i=0;i<3;i++){
        printf("Fruits: %d: %s\n",i+1,fruits[i]);
    }
    return 0;
}