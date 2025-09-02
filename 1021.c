#include <stdio.h>
int main() {
    double N;
    int v, notes[] = {100,50,20,10,5,2}, coins[] = {100,50,25,10,5,1};
    scanf("%lf", &N);
    v = (int)(N*100+0.5);

    printf("NOTAS:\n");
    for(int i=0;i<6;i++){ printf("%d nota(s) de R$ %d.00\n", v/(notes[i]*100), notes[i]); v%=notes[i]*100; }

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", v/100); v%=100;
    for(int i=0;i<6;i++){ printf("%d moeda(s) de R$ %.2f\n", v/coins[i], coins[i]/100.0); v%=coins[i]; }
    return 0;
}
