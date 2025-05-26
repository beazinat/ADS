/*
Programa para calcular a área de uma cabana e seus três cômodos: uma sala de estar de 10x10m, um banheiro e um quarto (ambos de 5x7m).
*/

#include <stdio.h>
#define PI 3.14159

int main()
{
    float lateral = 10; // comprimento da lateral da cabana
    float cquarto = 7;  // comprimento da lateral maior do quarto
    float raio = 3;     // raio da piscina
    float areaq;        // área do quarto
    float areas;        // área da sala de estar
    float areatotal;    // área total da cabana
    double areap;       // área da piscina

    printf("Programa para calcular a área de uma cabana\n");
    areas = lateral * lateral;
    printf("Área da sala de estar: %f m²\n", areas);
    areaq = (lateral / 2) * cquarto;
    printf("Área do quarto: %f m²\n", areaq);
    printf("Área do banheiro: %f m²\n", areaq);
    areatotal = areas + areaq * 2;
    printf("Área total da cabana: %f m²\n", areatotal);
    areap = PI * raio * raio;
    printf("Área da piscina: %f m²\n", areap);
    return 0;
}