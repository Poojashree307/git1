#include <stdio.h>
#include <string.h>

// Function to check if s can become goal after some number of shifts
int canShiftToGoal(const char *s, const char *goal) {
    int len = strlen(s);

    // Check if the lengths of s and goal are equal
    if (len != strlen(goal)) {
        return 0; // Return false if lengths are different
    }

    // Concatenate s with itself to handle circular shifts
    char temp[2 * len + 1];
    strcpy(temp, s);
    strcat(temp, s);

    // Check if goal is a substring of temp
    if (strstr(temp, goal) != NULL) {
        return 1; // Return true if goal is a substring
    }

    return 0; // Return false otherwise
}

int main() {
    // Example usage
    const char *s1 = "abcde";
    const char *goal1 = "cdeab";
    printf("Example 1: %s\n", canShiftToGoal(s1, goal1) ? "true" : "false");

    const char *s2 = "abcde";
    const char *goal2 = "abced";
    printf("Example 2: %s\n", canShiftToGoal(s2, goal2) ? "true" : "false");

    return 0;
}

