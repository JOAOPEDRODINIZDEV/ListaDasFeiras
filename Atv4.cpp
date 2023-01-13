#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v[10],cre;
	
	for(int n=0; n<10; n++){
		printf("Digite os Números");
	    scanf("%f",&v[n]);
	}	
	for(int i=0; i<10; i++){
		for(int x=0; x<10; x++){
			if(v[i]<v[x]){
				cre=v[i];
				v[i]=v[x];
				v[x]=cre;
			}
		}
	}
	printf("\n\nA Ordem CResente\n\n");
	for(int y=0; y<10; y++){
		printf("%.2f\n",v[y]);
	}
	return 0;
}
