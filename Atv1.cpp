#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int v[10];
	
	for(int i=0; i<10; i++){
		scanf("%d",&v[i]);
	}
	printf("N�meros pares de ordem de tr�s para frete\n\n");
	for(int x=9; x>=0; x--){
		if(v[x]%2==0){
			printf("%d\n",v[x]);
		}
	}
	
	return 0;
}
