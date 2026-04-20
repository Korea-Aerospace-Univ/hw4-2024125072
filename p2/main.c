#include <stdio.h>

int main(void)
{
    int stringSize = 0, alphabetCount = 0, numberCount = 0, i = 0;
    int alphabetCountMax = 0, numberCountMax = 0;
    char temp = '\0';
    
    scanf("%d", &stringSize);
    getchar();
    for (i=0; i < stringSize; i++) {
        scanf("%c", &temp);
        if (temp >= 'a' && temp <= 'z') {
            numberCount = 0;
            alphabetCount++;
            if (alphabetCount > alphabetCountMax) alphabetCountMax = alphabetCount;
        } else if (temp >= '0' && temp <= '9') {
            alphabetCount = 0;
            numberCount++;
            if (numberCount > numberCountMax) numberCountMax = numberCount;
        } else {
            // not lower or number
            
        }
    }
    
    
    printf("%d\n%d", alphabetCountMax, numberCountMax);
    return 0;
}
