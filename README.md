//main.c//
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

//array.cpp//

//
// Created by student on 31.03.2025.
//

#include <stdio.h>
#define SIZE 10

void enterNumbers(int *numbers) {
    for (int i = 0; i < SIZE; i++) {
        printf("numbers[%d] = ", i);
        scanf("%d", numbers + i);
    }
}

void displayNumbers(int *numbers) {
    for (int i = 0; i < SIZE; i++) {
        printf("numbers[%d] = %d\n", i, *(numbers + i));
    }
}

void calculateAverage(int *numbers) {
    float sum = 0;

    for (int i = 0; i < SIZE; i++) {
        sum += *(numbers + i);
    }

    printf("\nAverage: %.2f\n", sum / SIZE);
}

void findMaximum(int *numbers) {
    int max = *numbers;

 for (int i = 1; i < SIZE; i++) {
        if (*(numbers + i) > max) {
            max = *(numbers + i);
        }
    }

    printf("Maximum: %d\n", max);
}

void findMinimum(int *numbers) {
    int min = *numbers;

    for (int i = 1; i < SIZE; i++) {
        if (*(numbers + i) < min) {
            min = *(numbers + i);
        }
    }

    printf("Minimum: %d\n", min);
}

void menu() {
    printf("\nOptions:\n");
    printf("0 - Exit\n");
    printf("1 - Enter numbers\n");
    printf("2 - Display numbers\n");
    printf("3 - Find maximum\n");
    printf("4 - Find minimum\n");
    printf("5 - Calculate average\n");
    printf("6 - Save to file\n");
    printf("7 - Restore to file\n");
    printf("8 - Median value\n");
    printf("Please make your choice\n");
}

int SaveToFile(int numbers[]){
    FILE *fptr = NULL;

    fptr = fopen("../text.txt", "w");
    if (fptr == NULL)
    {
        fclose(fptr);
        return(1);
    }

    for(int i=0; i<SIZE; i++){
        fprintf(fptr,"%d\n",numbers[i]);
    }

    fclose(fptr);
    return(0);
    }

int RestoreFromFile(int numbers[]){
    FILE *fptr = NULL;

    fptr = fopen("../text.txt", "r");

    if (fptr == NULL)
    {
        fclose(fptr);
        return(1);
    }

    for(int i=0; i<SIZE; i++){
        fscanf(fptr,"%d\n",&numbers[i]);
    }

    fclose(fptr);
    return(0);
}

//array.h//
//
// Created by student on 31.03.2025.
//

#ifndef UNTITLED24_ARRAY_H
#define UNTITLED24_ARRAY_H

#define SIZE 10

void enterNumbers(int *numbers);

void displayNumbers(int *numbers);

void calculateAverage(int *numbers);

void findMaximum(int *numbers);

void findMinimum(int *numbers);

void menu();

int SaveToFile(int *numbers);

int RestoreFromFile(int *numbers);

#endif //UNTITLED24_ARRAY_H
