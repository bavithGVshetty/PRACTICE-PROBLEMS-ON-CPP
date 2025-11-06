#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);

    if (a+b+c==180)
    {
        if(a==60&&b==60&&c==60){
            printf("Prize3\n");
        }
        else if(a==90||b==90||c==90){
            printf("Prize2");
        }
        else{
            printf("Prize1\n");
        }
    }
    else{
        printf("No Prize\n");
    }    
}