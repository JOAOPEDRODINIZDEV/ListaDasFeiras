#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_brazil");
	int v[10],min,ord;
	
	printf("\n");
	for(int i=0; i<10; i++){
		printf("Digite o n�mero %d:",i+1);
		scanf("%d",&v[i]);
	}
	
	for(int y=0;y<10;y++){
	  if(v[y]==0){
	  printf("O n�mero %D � neutro\n",v[y]);
	  }
	
	else if(v[y]%2 == 0){
	printf("\nO n�mero %d � Par \n",v[y]);
}
		
		}


	
	return 0;
}
