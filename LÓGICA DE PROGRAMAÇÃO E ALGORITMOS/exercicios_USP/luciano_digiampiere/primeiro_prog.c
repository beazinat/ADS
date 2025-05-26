/*
Programa para calcular a área de uma cabana e seus três cômodos: uma sala de estar de 10x10m, um banheiro e um quarto (ambos de 5x7m).
*/

#include <stdio.h>

int main()
{
    /* printf(<expressão de saída/string de controle>[, parâmetros adicionais]);
        <expressão de saída>: contém o texto a ser impresso no terminal e também a indicação de onde parâmetros adicionais serão exibidos e em qual 'formato' (ex: %d, %f, %c, etc).
        Parâmetros adicionais: são os valores que serão substituídos nos locais indicados na expressão de saída.
        Exemplo: printf("O valor de x é %d", x);
    */
    printf("Programa para cálculo da área da cabana\n");
    printf("%i\n", 10 * 10);                       // Área da sala de estar (10m x 10m)
    printf("%i\n", 5 * 7);                         // Área do banheiro (5m x 7m)
    printf("%i\n", 5 * 7);                         // Área do quarto (5m x 7m)
    printf("%i\n", (10 * 10) + (5 * 7) + (5 * 7)); // Área total da cabana

    return 0;
}