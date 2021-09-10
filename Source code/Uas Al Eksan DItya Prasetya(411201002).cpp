#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){
	struct person{char nama[10],address[50];
	int phone;
		}person[2];
	int i,a;
	a=1;

	for(i=0;i<2;i++){
		printf("\n data ke-%i\n,",a);
		printf("Nama =");scanf("%s",&person[i].nama);
		printf("address =");scanf("%s",&person[i].address);
		printf("phone =");scanf("%s",&person[i].phone);
		a++;
	}
		printf("==========\n");
		for(i=0;i<3;i++){
		printf("%s%\n",person[i].nama);
		
		}
		
}
