#include <stdio.h>
#include <string.h>

	int main (){
		
	char titres[100][50];
	char auteurs[100][50];
	float prix[100];
	int quantite[100];
	int change;
	int i; 
	int index = 0;
	

	do{
		
	printf ("entere le nomber que tu veux:\n");
	printf ("entere 1 pour ajoute un livre\n"); 
	printf ("entere 2 Afficher Tous les Livres Disponibles:\n");
	printf ("entere 3 Mettre à Jour la Quantité d'un Livre: \n");
	printf ("entere 4 Supprimer un Livre du Stock: \n");
	printf ("entere 5 Afficher le Nombre Total de Livres en Stock:\n");
	printf ("entere 6 pour exit:\n");
	printf("\n");
	printf ("enter le choix:");
	
	scanf("%d", &change);
	
	switch(change)
	{
		case 1 :
			printf("Enter titre de livre: ");
			scanf ("%s", &titres[index]);
			
			printf("Enter auteur de livre: ");
			scanf("%s", &auteurs[index]);
			
	        printf("Enter quantite de livre: ");
			scanf("%d", &quantite[index]);
	
	        printf("Enter prix de livre: ");
			scanf("%d", &prix[index]);
			index++;
			break;
			
			
		case 2:
			printf("tous les liver diponibles: \n");
			for( i = 0; i <= index; i++){
			printf("%s \n", titres[i]);
			}
			break;
		case 3:
			int nq;
			printf("enter le Q de stock que tu va change: ");
			scanf("%d", nq);
			for(i =0; i <= index; i++){
				
			}
			
			

	
	}
	}while(change != 6);


	return 0;
	}
	
