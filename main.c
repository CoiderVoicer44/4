#include <stdio.h>

int main(void)
{
    int printedNum;
    int count = 0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &printedNum);

    for (int m = 1; m <= printedNum; m++) {
        if (printedNum / m == printedNum % m) {
            count++;
        }
    }

    printf("Кількість рівних дільників: %d", count);
    return 0;
}
