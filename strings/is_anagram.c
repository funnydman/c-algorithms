// poorly written code
#include <stdio.h>

#define LEN 26

int main(int argc, char *argv[]) {
    int arr[26] = {0};
    int ch;
    printf("Enter a first word: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            arr[ch - 'a'] += 1;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            arr[ch - 'a'] -= 1;
        }
    }
    int is_anagram = 1;
    for (int i = 0; i < LEN; ++i) {
        if (arr[i] != 0) {
            is_anagram = 0;
        }
    }
    if (is_anagram) {
        printf("Is anagram");

    } else {
        printf("Is not anagram");
    }

    return 0;
}
