#include <stdio.h>

int main(void)
{
    int secret = 0, attempt = 0, count = 0;

    scanf("%d", &secret);
    do {
        count++;
        scanf("%d", &attempt);
        if (attempt > secret) printf("%d 보다 낮습니다\n", attempt);
        else if (attempt < secret) printf("%d 보다 높습니다\n", attempt);
        else {
            printf("%d 정답입니다\n", attempt);
            printf("시도횟수는 %d회", count);
        }
        
    } while (attempt != secret);

    return 0;
}
