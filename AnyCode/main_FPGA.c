// juan silva
// executar seu próprio código C na placa FPGA (com argumentos) | equacao do primeiro grau
#include "eqPrimeiroGrau.h"

void __attribute__ ((naked)) main() {
    volatile int * const io = (int *)(0x3F*4);

    int coefA, coefB;

    coefA = *io; // Pega o coefieciente A de SWI[4:0]
    coefB = *io; // Pega o coefieciente b de SWI[4:0]
    
    /*
       Resolve uma equação do tipo ax + b = 0, exibe o resultado da operação no LED.

        OBS.: O RESULTADO SAI NA FORMA DE UM INTEIRO
    */
    *io = resolve_raiz_equacao_primeiro_grau(coefA, coefB); // Resultado da análise irá para saída - LED[4:0]
}