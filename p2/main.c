#include <stdio.h>

int main(void)
{
    int stringSize = 0, alphabetCount = 0, numberCount = 0, i = 0;
    int alphabetCountMax = 0, numberCountMax = 0;
    int isAlphabetSequence = 0, isNumberSequence = 0;
    char temp = '\0';
    
    scanf("%d", &stringSize);
    
    for (i=0; i < stringSize; i++) {
        scanf("%c", &temp);
        if (temp >= 'a' && temp <= 'z') {
            isAlphabetSequence = 1;
            isNumberSequence = 0;
        } else if (temp >= '0' && temp <= '9') {
            isNumberSequence = 1;
            isAlphabetSequence = 0;
        } else {
            // not lower or number
            
        }
        if (isAlphabetSequence) {
            isNumberSequence = 0;
            numberCount = 0;
            alphabetCount++;
            if (alphabetCount > alphabetCountMax) alphabetCountMax = alphabetCount;
        }
        if (isNumberSequence) {
            isAlphabetSequence = 0;
            alphabetCount = 0;
            numberCount++;
            if (numberCount > numberCountMax) numberCountMax = numberCount;
        }
    }
    
    
    printf("%d\n%d", alphabetCountMax, numberCountMax);
    return 0;
}
