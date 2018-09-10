#include <stdio.h>
#include <stdlib.h>

//Declaração da função, a mesma recebe dois parâmetros e retorna a diferença entre eles.
int comparaNum (int n1, int n2){
	return (n1-n2);
}

//A função abaixo, ordena fazendo a comparação entre dois elementos e trocando suas posições.
void myqsort(int* v, int n, int (*comparaNum)(int n1, int n2)){
	int i=0, j=0, aux=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(comparaNum(v[i], v[i])<0){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}
int main (){
	int *v; //Amarzena os números que serão ordenados.
	int *vaux; //Armazena o endereço da função compararNum.
	int n, i;
	vaux= &comparaNum;
	printf("informe uma quantidade de números: ");
	scanf("%d", &n);

	v=(int*)malloc(n*sizeof(int)); //Alocando memória.
	for(i=0;i<n;i++){
		v[i]=(1+rand()%100); //Valores aleatórios.
		printf("%d", v[i]);
	}
	printf("\n");
	myqsort(v,n,vaux); //Função de ordenação.
	for(i=0;i<n;i++){
		printf("\n %d \n", *(v+i));
	}
	free(v); //liberando espaço
	return 0;

}