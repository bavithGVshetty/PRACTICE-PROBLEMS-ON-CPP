#include <stdio.h>

int main()
{
    int m, n, m1, n1, x, y;

    printf("Enter the values");

    scanf("%d %d %d %d %d %d", &m, &n, &m1, &n1, &x, &y);

    int total_apples = m + (m + m1) - x;
    int total_oranges = n + (n + n1) - y;

    printf("%d %d\n", total_apples, total_oranges);

    return 0;
}

// Input output in C
// Variable
// 1.Declaration
// 2.Initialization
// 3.Update

// UNIX
// Embedded systems
// Compilers

// Types of operators
// 1.Arithmatic
// %,+,-,/,*
// 2.Conditional operator
// A>B ? true:false
// 3.Logical
// AND(&&),OR, NOT
// 3.Relational
// >,<,>=,!=
// 4.Bitwise operatior
// &,|,^,<<,>>
// 5.Assignment operator
// +=,-=,=,*=
