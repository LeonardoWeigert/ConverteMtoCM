/*** 
Implemente um sistema que o usuario digite um valor em metros(m) e converta para centimetros(cm)
-- Digite o valor em (m)
-- o valor convertido de X(m) é y(cm)
***/


#include <stdio.h>

int main()
{
	// Entrada - Start
	float metros, centimetro;
	
	printf("Digite o valor em (m): \n");
	scanf("%f",&metros);
	// Entrada - End
	
	// Processamento - Start
  	centimetro = ( metros * 100);
	// Processamento - End
	
	// Saida - Start
	printf("O valor convertido de %.2f eh = %.2f",metros, centimetro); 
	// Saida - End

}


