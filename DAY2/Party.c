// [7,0,5,1,3]

// [1,2,1,3,4]

// 6 4 8 6 5
#include <stdio.h>
#include<limits.h>
int main()
{
    int T;
    scanf("%d", &T);
    int E[T], L[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &E[i]);
    }
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &L[i]);
    }
    int current_guest = 0, max_guest =INT_MIN;
    int time = 0;
    for (int i = 0; i < T; i++)
    {
        current_guest = current_guest + E[i] - L[i];

        if (current_guest>max_guest)
        {
            max_guest = current_guest;
        }
        time++;
    }

    printf("The time %d has %d guest which is max\n", time, max_guest);
    return 0;
}
