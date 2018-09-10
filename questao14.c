#include <stdio.h>
#include <stdlib.h>


float ordenarCrescente(float *v, int n);

int main(){
	int n=10;// Quantidade de valores que serãolidos.
	int i;
	float *num;
	num=(float *) malloc(n*sizeof(float)); // Alocação dinâmica de memória.
	printf("Informe 10 valores para serem ordenados: ");
	for(i=0;i<n; i++){
		scanf("%f\n",(num+i));
	}
	ordenarCrescente(num, n); //Realizando chamada da função.
	for(i=0;i<n;i++){
		printf("%f ", *(num+i));
	}
	free(num); //Liberando espaço.
	return 0;
}
//Declaração da função
float ordenarCrescente(float* num, int n){
 int i=0, j=0, aux=0;
  for(i=0;i<n;i++){
  	for(j=0;j<n; j++){
  		if(num[i]<num[j]){
  			aux=num[i];
  			num[i]=num[j];
  			num[j]=aux;
  			i--;
  			break;
  		}
  	}
  }
}