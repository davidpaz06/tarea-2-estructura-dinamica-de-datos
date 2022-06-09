/*Pedir peso de N cantidad de personas y separarlos en 3 grupos: pesos menores a 40kg, entre 40kg y 80kg y por ultimo
pesos mayores a 80kg*/

#include<iostream>
#include<conio.h>

using namespace std;

int n, menor40=0, entre4080=0, mayor80=0;

int main()
{
printf("Digite el numero de personas a pesar: \n");
scanf("%d" , &n);
printf(" %d personas \n" , n);

float *peso = new float[n];

for(int i=1; i<n+1; i++){
	printf("Ingrese cuanto pesa la persona %d: \n" , i);
	scanf("%d" , &peso[i]);
	
	if(peso[i]<40){
		menor40++;
	}
	else if(peso[i]<=80){
		entre4080++;
	}
	else{
		mayor80++;
	}
}

printf("Personas con peso menor a 40 kilogramos: %d \n" , menor40);
printf("Personas con peso mayor a 40 kilogramos y menor a 80 kilogramos: %d \n" , entre4080);
printf("Personas con peso mayor a 80 kilogramos: %d \n" , mayor80);
}
