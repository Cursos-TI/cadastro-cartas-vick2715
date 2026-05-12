#include <stdio.h>
// Calculo de media

int main(){
    int nota1, nota2, nota3;
    float resultadoMedia;

    printf("___Calculo de Média___ \n");

    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%d", &nota3);

    resultadoMedia = (float)(nota1 + nota2 + nota3) / 3;
    printf("Sua Média é: %.1f \n", resultadoMedia);

    return 0;
}