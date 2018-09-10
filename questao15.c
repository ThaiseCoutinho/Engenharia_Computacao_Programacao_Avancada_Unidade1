#include <stdio.h>
#include <stdlib.h>

//Declaração da função
int comparaCrescente (const void *a, const void *b){
	return (*(int*)a - *(int*)b); //O retorno da função é a diferença entre a e b.
}
int main(){
	int n=10; //Quantidade de valores que serão lidos pelo teclado.
	int i=0; //Variável que será utilizada no laço.
	float *num; // Ponteiro pra float.

	num=(float *)malloc(n*sizeof(float)); //ALocação dinâmica de memória.
	printf("Informe 10 valores: ");
	for(i=0;i<n;i++){
		scanf("%f", (num+i)); //Valores que serão armazenados em num.
	}
	qsort(num, n, sizeof(float), comparaCrescente); //Aqui é feito a chamada da função qsort
	//essa função recebe 4 parâmetros como entrada: (vetor, tamanho do vetor, qtd de bytes do tipo de dado, função de comparação).
	for(i=0;i<n;i++){
		printf("%f ", *(num+i));
	}
	free(num);
	return 0;
}
