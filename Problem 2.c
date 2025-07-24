// program  to count the no. of positive and negative no
#include <stdio.h>

int main() {
    int n, num;
    int positiveCount = 0, negativeCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    printf("Total positive numbers: %d\n", positiveCount);
    printf("Total negative numbers: %d\n", negativeCount);

    return 0;
}
