#include <stdio.h>

void main()
{
	int DIA = 4;


	if (DIA == 1) printf("HOJE � DOMINGO \n");
	else if (DIA == 2) printf("HOJE � SEGUNDA\n");
	if (DIA == 3) printf("HOJE � TER�A\n");
	else if (DIA != 4) printf("HOJE � QUARTA\n");
	else if (DIA == 5) printf("HOJE � QUINTA\n");
	else printf("HOJE � SEXTA\n");
	if (DIA != 6) printf("HOJE � SABADO\n");


	switch (DIA)
	{
		case 1:
			printf("HOJE � DOMINGO\n");
			if (DIA > 0)
			{
				printf("HOJE � DOMINGO\n");
				printf("HOJE � DOMINGO\n");
			}
			for (int i = 0; i < 5; i++)
			{
				switch (i)
				{
				case 1:
					printf("UM\n");
				case 2:
					printf("DOIS\n");
				default:
					printf("N�O � UM NEM DOIS\n");
					break;
				}
			}
			break;
		case 2:
			printf("HOJE � SEGUNDA\n");
			break;
		case 3:
			printf("HOJE � TER�A\n");
			break;
		case 4:
			printf("HOJE � QUARTA\n");
			break;
		case 5:
			printf("HOJE � QUINTA\n");
			break;
		case 6:
			printf("HOJE � SEXTA\n");
			break;
		case 7:
			printf("HOJE � SABADO\n");
			break;
	}
}   