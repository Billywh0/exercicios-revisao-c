#include <stdio.h>
#include <locale.h>

typedef struct{
	float menor;
	float maior;
	float meio;
} MaMeMe;

MaMeMe Classifica(float n1, float n2, float n3){
	MaMeMe resultado;
	
	if ((n1<n2) && (n1<n3) && (n2<n3)) {
		printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n3<n2) && (n3<n1) && (n2<n1)) {
    	printf ("%.2f %.2f %.2f",n3, n2, n1);}
	else if ((n1<n2) && (n1<n3) && (n3<n2)) {
    	printf ("%.2f %.2f %.2f",n1, n3, n2);}
	else if ((n3<n1) && (n3<n2) && (n1<n2)) {
    	printf ("%.2f %.2f %.2f",n3, n1, n2);}
	else if ((n2<n1) && (n2<n3) && (n1<n3)) {
    	printf ("%.2f %.2f %.2f",n2, n3, n1);}
	else if ((n3<n2) && (n2<n1) && (n3<n1)) {
	    printf ("%.2f %.2f %.2f",n2, n3, n1);}
	else if ((n1==n2) && (n2<n3)) {
	    printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n1==n3) && (n1<n2)) {
	    printf ("%.2f %.2f %.2f",n1, n3, n2);}
	else if ((n1<n2) && (n2==n3)) {
    	printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n1==n2) && (n3<n1)) {
    	printf ("%.2f %.2f %.2f",n3, n1, n2);}
	else if ((n1==n2) && (n2<n3)) {
		printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else {
		printf ("%.2f %.2f %.2f",n2, n3, n1);}

}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float n1, n2, n3;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	printf("Digite terceiro número: ");
	scanf("%f", &n3);
	
	printf("\n");
	MaMeMe resultado = Classifica(n1, n2, n3);
	printf("\n");
	
	return 0;
}
