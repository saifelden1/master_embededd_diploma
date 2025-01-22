/*
 * main.c
 *
 *  Created on: Dec 9, 2024
 *      Author: 01226
 */

#include <stdio.h>

int maxOnesBetweenZeros(int n) {
    int maxOnes = 0;
    int currentOnes = 0;
    int foundFirstZero = 0;

    while (n > 0) {
        if ((n & 1) == 0) { // Current bit is 0
            if (foundFirstZero) { // If it's not the first zero
                if (currentOnes > maxOnes) {
                    maxOnes = currentOnes;
                }
            }
            foundFirstZero = 1; // Mark the first zero as found
            currentOnes = 0;    // Reset the counter for ones
        } else { // Current bit is 1
            if (foundFirstZero) { // Only count ones if we've seen a zero
                currentOnes++;
            }
        }

        n >>= 1; // Shift the number to process the next bit
    }

    // Ensure to check the final sequence after exiting the loop
    if (currentOnes > maxOnes && foundFirstZero) {
        maxOnes = currentOnes;
    }

    return maxOnes;
}

int main() {
    int input;

    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &input);

    printf("Input: %d, Maximum number of ones between two zeros: %d\n", input, maxOnesBetweenZeros(input));
    fflush(stdout);


    return 0;
}



