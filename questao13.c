#include <stdlib.h>
#include <stdio.h>

/*
Ponteiros para funções podem ser passados como argumentos para outras funções, e a função apontada pode ser invocada a partir de seu ponteiro.
Ponteiros permitem fazer uma chamada indireta a função e passá-la como parâmetro para outra funções.

https://programacaodescomplicada.wordpress.com/2015/03/30/c-aula-94-ponteiro-para-funcao/
*/

int soma (int a, int b){ //Declarando uma função.
	return a+b;
}
int main() {
	int (*pt)(); //Declarando ponteiro para função.		
	int x=0, y=0; //Declarando e inicializando as variáveis, que serão utilizadas para ler/receber os valores do teclado.
	int z;
	printf("Informe dois valores: \n");

	scanf("%d %d", &x, &y);
	pt=soma; //Ponteiro recebe a função soma.
	z=pt(x,y); //Z recebe a função pt, que recebe x e y.
	printf("Soma = %d\n",z);

	return 0;
}
