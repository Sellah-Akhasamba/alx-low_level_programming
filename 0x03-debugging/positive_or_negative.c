#include "main.h"
/**
 * main - Determine if a number is positive, negative or zero.
 * 0 : is the number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i) {
    if (i > 0) {
        printf("The number is positive.\n");
    } else if (i < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}
