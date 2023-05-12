#include <stdio.h>

int main() {
    const double pi = 3.14159; 
    double raio, volume, area; 
   
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0/3) * pi * raio * raio * raio;
    area = 4 * pi * raio * raio;
    
    printf("A area da superficie da esfera e: %.2lf\n", area);
    printf("O volume da esfera e: %.2lf\n", volume);

    return 0;
}