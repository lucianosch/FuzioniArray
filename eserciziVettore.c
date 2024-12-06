#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

/*
Determina la frequenza di x in a, cioè quante volte l'elemento x 
è presente nell'array a[]
*/
int frequenza(int a[], int x);
void inizializza(int a[]);
void stampa(int a[]);
int frequenza2(int a[], int x, int y);

int main(){
	int v[N];
	inizializza(v);
	stampa(v);
	int num = rand()%30;
	printf("Il valore %d è presente %d volte nell'array\n",num,frequenza(v,num));
	
	int a,b;
  a = rand()%30;
  b = rand()%(30-a) + a;
	printf("Il vettore contiene %d valori compresi tra %d e %d\n",frequenza2(v,a,b),a,b);

	return 0;
}

int frequenza(int a[], int x){
	int cont = 0;
	for (int i=0; i<N; i++)
		if (a[i] == x)
			cont++;
	return cont;
}

void inizializza(int a[]){
	srand(time(0));
	for (int i=0; i<N; i++)
		a[i] = rand()%30;
}

void stampa(int a[]){
	for (int i=0; i<N; i++)
		printf("%3d",a[i]);
	printf("\n");
}

int frequenza2(int a[], int x, int y){
	int cont =0;
	for (int i=0; i<N; i++)
	  if(a[i]>=x && a[i]<=y)
			cont++;
	return cont;
}