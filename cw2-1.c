 #include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000], res[1000] = "";
    int freq[256] = {0}; // Initialize frequency array with zeros

    printf("Enter the First string:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter the Second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline character

    for (int i = 0; i < strlen(str1); i++) {
        freq[str1[i]] = 1; // Mark the character as present in the first string
    }

    for (int i = 0; i < strlen(str2); i++) {
        if (!freq[str2[i]]) { // If the character is not present in the first string
            strncat(res, &str2[i], 1); // Append the character to the result string
        }
    }

    printf("\nOn removing characters from second string we get: %s\n", res);
    return 0;
}

