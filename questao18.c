#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somaV(int vA[], int vB[], int vC[], int num){
	int i;
	for(i=0; i<num; i++){
		vC[i] = vA[i] + vB[i];
	}
	for(i=0;i<num;i++){
		printf("%i ", vC[i]);
	}
	printf("\n");
}
int main (){
	int n, i;
	printf("Informe a quantidade de elementos do seu vetor?\n");
	scanf("%i" ,&n);

	int *vA=(int*)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++){
		vA[i]=i+1;
	}
	int *vB=(int*)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++){
		vB[i]=i-2*1;
	}
	int *vC=(int*)(malloc(n*sizeof(int)));
	somaV(vA,vB,vC,n);
	free(vA);
	free(vB);
	free(vC);
	return 0;
}