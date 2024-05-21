<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 57477e240887b4b0d403e54b7a74046b3d48bd3d
#include <stdio.h>

int main() {
    int A, B, C;

    // Iterate through possible values of A, B, and C
    for (A = 0; A <= 9; A++) {
        for (B = 0; B <= 9; B++) {
            for (C = 0; C <= 9; C++) {
                // Check if the equation holds true
                if (A * 111 + B * 101 + C * 10 == C * 111) {
                    // Print the values of A, B, and C
                    printf("A = %d, B = %d, C = %d\n", A, B, C);
                    return 0; // Exit after finding the first solution
                }
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}
<<<<<<< HEAD
=======
#include <stdio.h>

int main() {
    int A, B, C;

    // Iterate through possible values of A, B, and C
    for (A = 0; A <= 9; A++) {
        for (B = 0; B <= 9; B++) {
            for (C = 0; C <= 9; C++) {
                // Check if the equation holds true
                if (A * 111 + B * 101 + C * 10 == C * 111) {
                    // Print the values of A, B, and C
                    printf("A = %d, B = %d, C = %d\n", A, B, C);
                    return 0; // Exit after finding the first solution
                }
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}
>>>>>>> 95b4bac31c74982ba41e6c86620a99637f80d45e
=======
>>>>>>> 57477e240887b4b0d403e54b7a74046b3d48bd3d
