#include <stdio.h>

int main(void)
{
    int secret = 0, attempt = 0, count = 0;

    scanf("%d", &secret);
    do {
        count++;
        scanf("%d", &attempt);
        if (attempt > secret) printf("%d>?\n", attempt);
        else if (attempt < secret) printf("%d<?\n", attempt);
        else {
            printf("%d==?\n", attempt);
            printf("%d", count);
        }
        
    } while (attempt != secret);

    return 0;
}
