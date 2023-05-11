#include <stdio.h>
#include <stdlib.h>
main(){
	int sabor;
	
	printf("+--------------------------------+\n");
	printf("+	 SORVETERIA SANTA LUCIA		 +\n");
	printf("+--------------------------------+\n");
	printf("+	 1 - Nata Goiaba             +\n");
	printf("+	 2 - Leite Compensado		 +\n");
	printf("+	 3 - Napoleao Bonaparte		 +\n");
	printf("+	 4 - Chapolim Colorido		 +\n");
	printf("+	 5 - Chaculate				 +\n");
	printf("+	 6 - Mucili					 +\n");
	printf("+	 7 - Frokiss				 +\n");
	printf("+	 8 - Ma4lan					 +\n");
	printf("+--------------------------------+\n");
	printf("+--------Escolha o sabor---------+\n");
	scanf("%i",&sabor);
	switch(sabor)
	{
		case 1:
			printf("Voce escolheu Nata Goiaba");
			break;
		case 2:
			printf("Voce escolheu Leite Compensado");
			break;
		case 3:
			printf("Voce escolheu Napoelao Bonaparte");
			break;
		case 4:
			printf("Voce escolheu Chapolim Colorado");
			break;
		case 5:
			printf("Voce escolheu Chaculate");
			break;
		case 6:
			printf("Voce escolheu Mucili");
			break;
		case 7:
			printf("Voce escolheu Frokiss");
			break;
		case 8:
			printf("Voce escolheu Ma4lan");
			break;
		default:
			printf("Na	o ha nenhum sabor registrado com esse numero!");
			break;
	}
	
	
}
