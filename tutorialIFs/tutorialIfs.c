#include <stdio.h>

void main()
{
	int DIA = 4;


	if (DIA == 1) printf("HOJE É DOMINGO \n");
	else if (DIA == 2) printf("HOJE É SEGUNDA\n");
	if (DIA == 3) printf("HOJE É TERÇA\n");
	else if (DIA != 4) printf("HOJE É QUARTA\n");
	else if (DIA == 5) printf("HOJE É QUINTA\n");
	else printf("HOJE É SEXTA\n");
	if (DIA != 6) printf("HOJE É SABADO\n");


	switch (DIA)
	{
		case 1:
			printf("HOJE É DOMINGO\n");
			if (DIA > 0)
			{
				printf("HOJE É DOMINGO\n");
				printf("HOJE É DOMINGO\n");
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
					printf("NÃO É UM NEM DOIS\n");
					break;
				}
			}
			break;
		case 2:
			printf("HOJE É SEGUNDA\n");
			break;
		case 3:
			printf("HOJE É TERÇA\n");
			break;
		case 4:
			printf("HOJE É QUARTA\n");
			break;
		case 5:
			printf("HOJE É QUINTA\n");
			break;
		case 6:
			printf("HOJE É SEXTA\n");
			break;
		case 7:
			printf("HOJE É SABADO\n");
			break;
	}
}   