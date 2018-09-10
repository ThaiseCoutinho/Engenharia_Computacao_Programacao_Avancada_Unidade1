
/*Ao somarmos o vator x com x+1, x+2..., também somando o endereço de memória + n*sizeof(tipoVar)

Caso char:
 x= 4092
 x+1= 4092 + 1*sizeof(char)= 4092 + 1= 4093;
 x+2= 4092 + 2*sizeof(char)= 4092 + 2= 4094;
 x+3= 4092 + 3*sizeof(char)= 4092 + 3= 4095;

Caso int: 
 x= 4092
 x+1= 4092 + 1*sizeof(char)= 4092 + 2= 4094;
 x+2= 4092 + 2*sizeof(char)= 4092 + 4= 4096;
 x+3= 4092 + 3*sizeof(char)= 4092 + 6= 4098;

caso float:
 x= 4092
 x+1= 4092 + 1*sizeof(char)= 4092 + 4= 4096;
 x+2= 4092 + 2*sizeof(char)= 4092 + 8= 4100;
 x+3= 4092 + 3*sizeof(char)= 4092 + 12= 4104;

caso double: 
 x= 4092
 x+1= 4092 + 1*sizeof(char)= 4092 + 8= 4100;
 x+2= 4092 + 2*sizeof(char)= 4092 + 16= 4108;
 x+3= 4092 + 3*sizeof(char)= 4092 + 24= 4116;
