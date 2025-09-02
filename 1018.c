#include <stdio.h>
int main() {
    int N, notes[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &N);
    printf("%d\n", N);
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", N / notes[i], notes[i]);
        N %= notes[i];
    }
    return 0;
}

