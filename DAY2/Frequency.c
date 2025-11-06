#include<stdio.h>

int main(){
    int n,num;
    scanf("%d",&n);
    // Mapping
    int freq[25]={0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (num>=1&& num<=25)
        {
            freq[num]++;
        }
        
    }
    for(int i=1;i<=25;i++){
        if(freq[i]>0){
            printf("%d %d\n",i,freq[i]);
        }
    }
    return 0;
}