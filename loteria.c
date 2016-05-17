#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

int numHuma1,numHuma2,numHuma3 = 0;
int numCpu1,numCpu2,numCpu3 = 0;

char continuar = 's';

while (continuar == 's'){

system("clear");

printf("Introdueix el primer número\n");
scanf("%i",&numHuma1);

printf("Introdueix el segon número\n");
scanf("%i",&numHuma2);

printf("Introdueix el tercer número\n");
scanf("%i",&numHuma3);

time_t t;

srand((unsigned) time(&t));

numCpu1 = rand() % 10;
numCpu2 = rand() % 10;
numCpu3 = rand() % 10;

if(numHuma1 == numCpu1){
printf("Has encertat el primer número\n");}
else{
printf("No has encertat el primer número\n");
}

if(numHuma2 == numCpu2){
printf("Has encertat el segon número\n");}
else{
printf("No has encertat el segon número\n");
}

if(numHuma3 == numCpu3){
printf("Has encertat el tercer número\n");}
else{
printf("No has encertat el tercer número\n");
}

printf("Número 1: %i, Num1 CPU: %i\n",numHuma1,numCpu1);
printf("Número 2: %i, Num2 CPU: %i\n",numHuma2,numCpu2);
printf("Número 3: %i, Num3 CPU: %i\n",numHuma3,numCpu3);
getchar();
printf("Vols tornar a executar el programa? (s/n)\n");
scanf("%c" ,&continuar);

}

}