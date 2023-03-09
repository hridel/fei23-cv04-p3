#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 50

int main() {
    char pattern[] = "aeiouy";
    int patternsCounter[6] = { 0 };
    char myString[MAX_STR_LENGTH];

    printf("Zadejte vetu pro rozbor:\n");
    scanf("%[^\n]", myString);

    int patternLength = strlen(pattern);
    for (int i=0; i < MAX_STR_LENGTH; i++){
        for (int j = 0; j < patternLength; j++){
            if (myString[i] == pattern[j] || myString[i] == (pattern[j] - 32))
                patternsCounter[j]++;
        }
    }

    printf("\nCetnost samohlasek v textu '%s' je:\n", myString);
    for (int i=0; i < patternLength; i++){
        printf("%c: %d\n", pattern[i], patternsCounter[i]);
    }

    return 0;
}
