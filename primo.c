#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int primo(int p,int v){
	int i=0;
	if(v==1){ 
	return i;
}else{
	if(p%v==0){
	return	i=primo(p,v-1)+1;
	}else primo(p,v-1);
}
}
int main(){
	srand(time(NULL));
	int p,i,j;
//escolha entre você colocar o número ou usar o for randomico
	//printf("Valor: ");scanf("%d",%d);
	for(j=0;j<10;j++){
/*altere a faixa de representaão mudando o 1 ou 20		
ou apenas preencha com valores com um vtero comum*/
	p=1+(rand()%20);
	if(p!=1){
	i=primo(p,p);
	if(i==1){printf("%d e Primo\n",p);}
	else printf("%d nao e primo\n",p);}
	else printf("%d e Primo\n",p);
}
}
