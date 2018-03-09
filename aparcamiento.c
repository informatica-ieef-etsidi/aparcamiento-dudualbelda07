//Desarrollado por Eduardo Albelda Reliegos
//Práctica 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//Necesito esta libreria para el comando -fflush(stdin)-

int main() {
	int plaza1 = 0, plaza2 = 0;
	char opcion;
	char matricula1[8];
	char matricula2[8];
	while (1) {
		system("cls");
		system("color F1");
		printf("Seleccione una de estas opciones:\n");
		printf("\tR-Reservar plaza\n");
		printf("\tA-Abandonar plaza\n");
		printf("\tE-Estado del aparcamiento\n");
		scanf_s("%c", &opcion);
		fflush(stdin); //Empleo este comando para almacenar este dato temporalmente en el buffer

		switch (opcion) {
		case 'R':
		case 'r':
			if (plaza1 == 0) {
				printf("Introduce tu matricula\n");
				plaza1 = 1;
				scanf_s("%s", matricula1);
				printf("\tHas reservado tu plaza correctamente\n");
				fflush(stdin); //Vuelvo a usar este comando
				getchar();
			}
			else if (plaza1 == 1 && plaza2 == 0) {
				printf("Introduce tu matricula\n");
				plaza2 = 1;
				scanf_s("%s", matricula2);
				printf("\tHas reservado tu plaza correctamente\n");
				fflush(stdin); //Vuelvo a usar este comando
				getchar();
			}
			else
				system("colour 04");
			printf("\tNo queda ninguna plaza disponible\n");
			break;

		case 'E':
		case 'e':
			if (plaza1 == 0);
			printf("\tLa plaza 1 está vacía\n");
			if (plaza1 == 1);
			printf("\tLa plaza 1 está en uso actualmente\n");
			if (plaza2 == 0);
			printf("\tLa plaza 2 está vacía\n");
			if (plaza2 == 1);
			printf("\tLa plaza 2 está en uso actualmente\n");
			break;
		default:
			printf("Dato no reconocido!\n");
			break;
			getchar();
		}

	}

	system("pause");
}