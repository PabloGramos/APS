#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void inicio (void){
	printf("------------CALCULADORA--------------\n");
	printf("-----------Pablo-Vinicius------------\n");
	printf("               Menu                \n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Raiz Quadrada\n");
	printf("6 - Seno, Cosseno, Tangente\n");
	printf("7 - Historico\n");
	printf("0 - Sair\n\n");
}
int soma(int n1,int n2){
	int r=1,resu;
	while(r>0){
		resu=n1+n2;
		printf("%d + %d = %d\n\n",n1,n2,resu);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
	}
	return(resu);
}
int sub(int n1,int n2){
	int r=1,sub;
	while(r>0){
		sub=n1-n2;
		printf("%d - %d = %d\n\n",n1,n2,sub);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
}
}
int mult(){
	int r=1,n1,n2,mult;
	while(r>0){
		
		
		printf("Insira o valor: ");
		scanf("%d",&n1);
		printf("%d X ",n1);
		scanf("%d",&n2);
		mult=n1*n2;
		printf("%d X %d = %d\n\n",n1,n2,mult);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
}
}
float divi(){
	int r=1,n1,n2;
	float divi;
	while(r>0){
		printf("Insira o valor: ");
		scanf("%d",&n1);
		printf("%d / ",n1);
		scanf("%d",&n2);
		if(n2==0){
			printf("Nao existe divisao por 0!\n\n");
			break;
		}
		divi=n1/n2;
		printf("%d / %d = %.2f\n\n",n1,n2,divi);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
}
}
int raiz(){
	int r=1;
	float n,raiz;
	while(r>0){
		printf("Insira o valor: ");
		scanf("%f",&n);
		if(n<0){
			printf("Nao existe raiz de numeros negativos!\n\n");
			break;
		}
		raiz=sqrt(n);
		printf("Raiz de %.2f = %.2f\n\n",n,raiz);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
}
}
float sct(int n){
	int r=1;
	float seno,cosseno,tang;
	while(r>0){
		seno=sin(n);
		cosseno=cos(n);
		tang=tan(n);
		printf("Seno de %d = %.2f\n",n,seno);
		printf("Cosseno de %d = %.2f\n",n,cosseno);
		printf("Tangente de %d = %.2f\n\n",n,tang);
		printf("1-Continuar 0-Sair: \n");
		scanf("%d",&r);
}
}

int main(){
	int op,r=1,n,n1,n2;
	FILE *arquivo;
	arquivo = fopen("dados.txt","w");
	while(r>0){
		inicio();
	printf("Escolha a operacao\n");
	scanf("%d",&op);
	
	if(op == 0){
		break;
	}
	else if(op == 1){
		int n1,n2;
		printf("Insira o valor: ");
		scanf("%d",&n1);
		printf("%d + ",n1);
		scanf("%d",&n2);
		soma(n1,n2);
		
	}
	else if(op == 2){
		int n1,n2;
		printf("Insira o valor: ");
		scanf("%d",&n1);
		printf("%d - ",n1);
		scanf("%d",&n2);
		sub(n1,n2);
	}
	else if(op == 3){
		mult();
	}
	else if(op == 4){
		divi();
	}
	else if(op == 5){
		raiz();
	}
	else if(op == 6){
		printf("Insira o valor: ");
		scanf("%d",&n);
		sct(n);
		
		
		
	}
	else if(op == 7){		
		arquivo = fopen("dados.txt","r");
		int g;
		fscanf(arquivo,"%i",&g);
		if(arquivo == NULL){
			printf("Arquivo nao encontrado! \n");
		}
		printf("%i",g);
		
		fclose(arquivo);
	}
	else{
		printf("Opcao Invalida!\n\n");
	}
	
	
	}
	return 0;
}


