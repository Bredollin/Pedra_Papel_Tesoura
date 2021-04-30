pedra_papel_tesoura

int main()
{
	char player[256]
	char player2[256]

	printf("\nplayer 1, sua vez...");
		scanf("%s",&player)

	printf("\nPplayer 2, sua vez...");
		scanf("%s",&player2)


	printf("\nAguarde, vamos calcular o resultado\n");



			if(strcmp(player,"papel") == 0 ){

				            if(strcmp(player2,"papel") == 0 ){
				            	printf("\nEmpate !");
							}else if(strcmp(player2,"tesoura") == 0 ){
								printf("\nplayer 2 ganhou porque tesoura ganha de papel");
							}else if(strcmp(player2,"pedra") == 0 ) {
								printf("\nPlayer 2 predeu porque papel ganha de pedra");
							}else{
								printf("\nO player2 jogou uma informacao invalida");
							}
 

			}else if(strcmp(player,"tesoura") == 0 ){

				            if(strcmp(player2,"papel") == 0 ){
				            	printf("\nPlayer 2 perdeu por que tesoura ganha de papel !");
							}else if(strcmp(player2,"tesoura") == 0 ){
								printf("\nEmpate");
							}else if(strcmp(player2,"pedra") == 0 ) {
								printf("\nPlayer 2 ganhou porque pedra ganha de tesoura");
							}else{
								printf("\nO player2 jogou uma informacao invalida");
							}
 

			}else if(strcmp(player,"pedra") == 0 ) {

							if(strcmp(player2,"papel") == 0 ){
				            	printf("\nPlayer 2 ganhou porque papel ganha de pedra!");
							}else if(strcmp(player2,"tesoura") == 0 ){
								printf("\nPlayer 2 perdeu porque pedra ganha de tesoura");
							}else if(strcmp(player2,"pedra") == 0 ) {
								printf("\nEmpate");
							}else{
								printf("\nO player2 jogou uma informacao invalida");
							}

			}else{
				printf("\nVoce Jogou uma informacao invalida");
			}
 



	return 0;
}


