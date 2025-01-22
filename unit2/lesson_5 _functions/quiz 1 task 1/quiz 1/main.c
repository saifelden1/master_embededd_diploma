/*
 * main.c
 *
 *  Created on: Dec 4, 2024
 *      Author: 01226
 */
#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary number
    int binary[32];  // We assume the number fits in 32 bits

    // Index to store binary digits
    int i = 0;

    // Edge case for zero
    if (n == 0) {
        printf("0");
        fflush(stdout);
        return;
    }

    // Convert the decimal number to binary (right to left)
    while (n > 0) {
        binary[i] = n % 2;  // Store the remainder (either 0 or 1)
        n = n / 2;  // Divide the number by 2
        i++;
    }

    // Print the binary number from right to left
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
        fflush(stdout);

    }
    printf("\n");
    fflush(stdout);

}

int main() {
    int num;

    // Read the decimal number
    printf("Enter a decimal number: ");
    fflush(stdout);

    scanf("%d", &num);

    // Convert and print the binary equivalent
    decimalToBinary(num);

    return 0;
}

