// x=hours worked on weekends
// weekdays=x+10

// Rates
// weekdays=80/h
// weekends=50/h

// 1.weakdays=80(x+10)
// 2.weekend=50x


// // total_salary=80(x+10)+50x
// // 2750=80(x+10)+50x
// // x=(2750-800)/130;

#include<stdio.h>

int main(){
    double total_salary;
    scanf("%lf",&total_salary);
    int weekend_hours=(total_salary-800)/130;

    int weeday_hours=weekend_hours+10;

    printf("Number of weekday hours is %d\n",weeday_hours);
    printf("Number of weekend hours is %d\n",weekend_hours);
}

