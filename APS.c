#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

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
	int resu;
	resu=n1+n2;
	return(resu);
}
int sub(int n1,int n2){
	int resu;
	resu=n1-n2;
	return(resu);
}

int mult(int n1,int n2){
	int resu;
	resu=n1*n2;
	return(resu);
}
float divi(int n1,int n2){
	float resuf;
	resuf=n1/n2;
	return(resuf);
}

float raiz(int n){
	float resuf;
	resuf=sqrt(n);
	return(resuf);
}

float seno(int n){
	float seno;
	seno=sin(n);
	return(seno);
}
float cosseno(int n){
	float cosseno;
	cosseno=cos(n);
	return(cosseno);
}
float tang(int n){
	float tang;
	tang=tan(n);
	return(tang);
}

int main(){
	int op,j=1,r=1,n,n1,n2;
	int resu;
	float resuf;
	FILE *arquivo;
	arquivo = fopen("dados.txt","w");
	fprintf(arquivo,"--------------Historico---------------\n");
	fclose(arquivo);
	while(j>0){
		inicio();
		printf("Escolha a operacao\n");
		scanf("%d",&op);
		if(op == 0){
			break;
		}
		else if(op == 1){
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n1);
				printf("%d + ",n1);
				scanf("%d",&n2);
				resu = soma(n1,n2);
				printf("%d + %d = %d\n\n",n1,n2,resu);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"%d + %d = %d \n",n1,n2,resu);
				fclose(arquivo);
				
			printf("1-Continuar 0-Sair: \n");
			fclose(arquivo);
			scanf("%d",&r);
			
		}
		}
		else if(op == 2){
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n1);
				printf("%d - ",n1);
				scanf("%d",&n2);
				resu = sub(n1,n2);
				printf("%d - %d = %d\n\n",n1,n2,resu);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"%d - %d = %d \n",n1,n2,resu);
				fclose(arquivo);
				printf("1-Continuar 0-Sair: \n");
				scanf("%d",&r);
				
		}
		}
		else if(op == 3){
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n1);
				printf("%d X ",n1);
				scanf("%d",&n2);
				resu = mult(n1,n2);
				printf("%d X %d = %d\n\n",n1,n2,resu);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"%d x %d = %d \n",n1,n2,resu);
				fclose(arquivo);
				printf("1-Continuar 0-Sair: \n");
				scanf("%d",&r);
				
		}
		}
		else if(op == 4){
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n1);
				printf("%d / ",n1);
				scanf("%d",&n2);
				if(n2==0){
					printf("Nao existe divisao por 0!\n\n");
					break;
				}
				resuf = divi(n1,n2);
				printf("%d / %d = %.2f\n\n",n1,n2,resuf);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"%d / %d = %d \n",n1,n2,resu);
				fclose(arquivo);
				printf("1-Continuar 0-Sair: \n");
				scanf("%d",&r);
				
		}
		}
		else if(op == 5){
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n);
				if(n<0){
					printf("Nao existe raiz de numeros negativos!\n\n");
					break;
				}
				resuf = raiz(n);
				printf("Raiz de %d = %.2f\n\n",n,resuf);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"Raiz de %d = %.2f\n",n,resuf);
				fclose(arquivo);
				printf("1-Continuar 0-Sair: \n");
				scanf("%d",&r);
				
		}
		}
		else if(op == 6){
			float s,c,t;
			r=1;
			while(r>0){
				printf("Insira o valor: ");
				scanf("%d",&n);
				s = seno(n);
				c = cosseno(n);
				t = tang(n);
				printf("Seno de %d = %.2f\n",n,s);
				printf("Cosseno de %d = %.2f\n",n,c);
				printf("Tangente de %d = %.2f\n\n",n,t);
				arquivo = fopen("dados.txt","a");
				fprintf(arquivo,"Seno de %d = %.2f\n",n,s);
				fprintf(arquivo,"Cosseno de %d = %.2f\n",n,c);
				fprintf(arquivo,"Tangente de %d = %.2f\n\n",n,t);
				fclose(arquivo);
				printf("1-Continuar 0-Sair: \n");
				scanf("%d",&r);
				
		}
		}		
		else if(op == 7){		
			arquivo = fopen("dados.txt","r");
			char leitura[100];
			while(fgets(leitura, 100,arquivo) != NULL){
				printf("%s\n", leitura);
			}
			fclose(arquivo);
		}
		
		
		else{
			printf("Opcao Invalida!\n\n");
		}
		}
	return 0;
}
