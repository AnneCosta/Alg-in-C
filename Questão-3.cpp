#include <stdio.h>
#include <locale.h>

int mes (int d, int m, int a){
	int meses;
	if(m==1) {
		printf("\nAnivers�rio em %d de janeiro de %d.\n", d, a);
	}	
	if(m==2) {
		printf("\nAnivers�rio em %d de feveireiro de %d.\n", d, a);
	}
	if (m==3) {
		printf("\nAnivers�rio em %d de mar�o de %d.\n", d, a);
	}
	if(m==4) {
		printf("\nAnivers�rio em %d de abril de %d.\n", d, a);
	}
	if(m==5) {
		printf("\nAnivers�rio em %d de maio de %d.\n", d, a);
	}
	if(m==6) {
		printf("\nAnivers�rio em %d de junho de %d.\n", d, a);
	}
	if(m==7) {
		printf("\nAnivers�rio em %d de julho de %d.\n", d, a);
	}
	if(m==8) {
		printf("\nAnivers�rio em %d de agosto de %d.\n", d, a);
	}
	if(m==9) {
		printf("\nAnivers�rio em %d de setembro de %d.\n", d, a);
	}
	if(m==10) {
		printf("\nAnivers�rio em %d de outubro de %d.\n", d, a);
	}
	if(m==11) {
		printf("\nAnivers�rio em %d de novembro de %d.\n", d, a);
	}
	if(m==12) {
		printf("\nAnivers�rio em %d de dezembro de %d.\n", d, a);
	}
	
}

main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int d, m, a, index;
	
	printf("Informe o dia do seu nascimento: ");
	scanf("%d", &d);
	printf("Informe o m�s do seu nascimento: ");
	scanf("%d", &m);
	printf("Informe o ano do seu nascimento: ");
	scanf("%d", &a);
	
	mes(d, m, a);
}
	
