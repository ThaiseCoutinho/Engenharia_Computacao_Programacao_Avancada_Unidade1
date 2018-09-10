	

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;


aloha[2] = 2.2; //Comando válido
scanf("%f", &aloha); // comado válido
aloha = value; // comando inválido
printf("%f", aloha); // comando válido
coisas[4][4] = aloha[3]; // comando válido
coisas[5] = aloha; // comando inválido

pf = value; // comando válido
pf = aloha; // comando válido


