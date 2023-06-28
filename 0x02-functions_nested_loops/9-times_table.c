#include <stdio.h>

void times_table(void)
{
    int multiplier = 0;

    for (int i = 0; i <= 9; i++) {
        int result = multiplier * 9;
        printf("9 x %d = %d\n", multiplier, result);
        multiplier++;
    }
}

int main()
{
    times_table();
    return 0;
}

