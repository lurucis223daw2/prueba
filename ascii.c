//Autor: Luis Enrique Ruiz 
//Data: 09-02-22
#include <stdio.h>

int main() {
	char c;
	int n,i;
		
	printf("TAULA ASCII MAJÚSCULES 09-02-2022\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=n;i>=0;i--) {
		c='A'+i;
//C:\Users\Luis\Documents\DAW2\M08\UF4\Examen\prueba
		printf("%c    %x   %d\n",c,c,c);
	}
	return(0);
}
