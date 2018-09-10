#include <stdio.h>
int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  // Será mostrado o valor atribuído ao ponteiro P1 (20).
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b) */
  //Será mostrado o valor atibuído ao ponteiro P2 (29.0).
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  /* (c) */
  //Será mostrado a letra P (char), a letra que estána posição nome[0].
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d) */
  //Será mostrado a letra/char (e) que aparece na posição nome[4].
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e) */
  //Será mostrado a letra/char que está na primeira posição do vetor nome[0] (P), pois a posição não foi especificada.
  p3 = nome;
  printf("%c \n", *p3);

  /* (f) */
  //Como na letra questão anterior o vetor "nome" está atribuído ao ponteiro P3, aqui será mostrado o valor que está na posição do vetor "nome[4]" letra e.
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g) */
  //Da questão anterior temos que p3 está com o conteúdo do vetor nome[4], quando fazemos "p3--", decrementamos uma posição, ou seja fazemos (p3=p3-1), nesse caso será mostrado o contéudo que está na posição nome[3] letra t.
  p3--;
  printf("%c \n", *p3);

  /* (h) */
  //Será mostrado o valor que está na primeira posição do vetor "vetor[0]" valor 31, pois a posição não foi especificada, e idade aponta para o ponteiro p4.
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */
  //Partindo do pressuposto que p4 recebe a primeira posição do vetor "vetor", quando fazemos "p4+1" será mostrado a segunda posição do vetor "vetor" valor 45. percebemos que idade aponta para o ponteiro p5, e p5 recebe o conteúdo de "p4 +1".
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */
//Partindo do pressuposto que p5 recebe a posição "p4 + 1" do "vetor", quando fazemos "p5+1" será mostrado a terceira posição do vetor "vetor" valor 27. percebemos que idade aponta para o ponteiro p4, e p4 recebe o conteúdo de "p5 +1".
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */
  //O conteúdo de p4 vindo da questão anterior é a terceira posição do vetor "vetor", ou seja (27), quando faço "p4-2", eu volto duas posições, ou seja, será mostrado o conteúdo que está na posição vetor[0].
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  //Neste caso estou atribuindo o endereço da posição vetor[2] subtraida de 1 ao ponteiro p5, será mostrado o conteúdo que está na segunda posição do vetor "vetor".
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */
 //Da questão anterior temos o endereço da posição vetor[1] atribuido ao ponteiro p5, quando fazendo "p5++", será mostardo o valor que está na posição vetor[2] valor 27.
 p5++;
 printf("%d \n", *p5);
  return(0);
}
