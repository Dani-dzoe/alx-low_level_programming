#include "main.h"

void times_table(void)
{
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int result = i * j;
            printf("%d, ", result);
        }
        printf("$\n");
    }
}

int main()
{
    times_table();
    return 0;
}

