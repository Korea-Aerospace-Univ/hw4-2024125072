#include <stdio.h>

int main(void)
{
    int stringSize = 0, alphabetCount = 0, numberCount = 0, i = 0;
    int alphabetCountMax = 0, numberCountMax = 0;
    int isAlphabetSequence = 0, isNumberSequence = 0;
    char buffer[100] = "";
    
    scanf("%d", &stringSize);
    
    
    scanf("%s", &buffer);
    
    
    for (i=0; i < stringSize; i++){
        if (buffer[i] >= 'a' && buffer[i] <= 'z') {
            isAlphabetSequence = 1;
            isNumberSequence = 0;
        } else if (buffer[i] >= '0' && buffer[i] <= '9') {
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
