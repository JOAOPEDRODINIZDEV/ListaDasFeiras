#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_brazil");
	int v[10];
	
	printf("\n");
	for(int i=0; i<10; i++){
		printf("Digite o número %d:",i+1);
		scanf("%d",&v[i]);
	}
	printf("1:Par; -1:impar\n\n");
	for(int y=0;y<10;y++){
		if(v[y]==0){
	    printf("O Número 0 é Neutro\n");	
		}
   

	else if(v[y]%2 == 0){
	v[y]=1;
	printf("%d\n ",v[y]);
		
	}else if(v[y]%2 !=0){
	v[y]=-1;
	printf("%d\n",v[y]);
	}
}
	
	return 0;
}
