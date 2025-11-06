#include <stdio.h>

// 21 3 44 
// 78 25 19 
// 50 23 6 

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int count=0;

     for (int i = 0; i  < n; i++)
    {
        int age=matrix[i][i];
        if(age>=18&&age<=60){
            count++;
        }

    }
    printf("\nThe mid aged passenger are:%d\n",count);
    
}