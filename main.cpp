#include <stdio.h>
#define SIZE 10
#include "array.h"

int main() {
    int numbers[SIZE] = {1,2,3,4,5,6,9,8,3,2};
    int option;

    while (1) {
        menu();
        scanf("%d", &option);

        if (option == 0) {
            break;
        }

        switch (option) {
            case 1:
                enterNumbers(numbers);
                break;
            case 2:
                displayNumbers(numbers);
                break;
            case 3:
                findMaximum(numbers);
                break;
            case 4:
                findMinimum(numbers);
                break;
            case 5:
                calculateAverage(numbers);
                break;
            case 6:
                SaveToFile(numbers);
                break;
            case 7:
                RestoreFromFile(numbers);
                break;
            case 8:
                printf("zrobic jeszce");
                break;

            default:
                printf("Choose correct option\n");
        }
    }

    return 0;
}
