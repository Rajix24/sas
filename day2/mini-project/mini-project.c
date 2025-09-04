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
<<<<<<< HEAD
	    printf ("entere 3 Mettre � Jour la Quantit� d'un Livre: \n");
    	printf ("entere 4 Supprimer un Livre du Stock: \n");
    	printf ("entere 5 Afficher le Nombre Total de Livres en Stock:\n");
=======
	    printf ("entere 3 pour recherch sur le livre:\n");
	    printf ("entere 4 Mettre ? Jour la Quantit? d'un Livre: \n");
    	printf ("entere 5 Supprimer un Livre du Stock: \n");
    	printf ("entere 6 Afficher le Nombre Total de Livres en Stock:\n");
>>>>>>> d90f700 (fini le project)
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
      //  recherch :
            char nvtitle[50];
            printf("enter le titer de liver: ");
            scanf("%s", &nvtitle);
            int nq =0;
<<<<<<< HEAD
            printf("enter le titre de liver: ");
            scanf("%d", &nq);
=======

>>>>>>> d90f700 (fini le project)
            for (int i = 0; i < index ; titres[i]){
                if(strcmp(nvtitle, titres[i]) == 0){
                  printf("liver troune: \n");
                  printf("titer: %s\n", titres [i]);
                  printf("auteur %s\n", auteurs[i]);
                  printf("prix %f \n", prix [i]);
                  printf("quantite\n", quantite[i]); 
                  nq= 1;
                }
                if(nq != 1){
                  printf ("nom liver avec ce titer!");
                }
              }
                break;
          case 4: 
            //metter:
              int newq;
              int num;
<<<<<<< HEAD
              printf("entrer id de livre (1 - %d) :\n", index);
=======
              printf("entrer id de livre (1 -> %d) :\n", index);
>>>>>>> d90f700 (fini le project)
              scanf("%d", &num);

              if (num >= 1 && num <= index)
              {
                  printf("entre la nouvelle quantite :\n");
                  scanf("%d", &newq);
                  quantite[num - 1] = newq;
                  printf("le change est seccesfully\n");
              }
              else
              printf("nombre invalide!?\n");
              break;
          case 5:// Supprimer un livre
              int found =0;
                  char sbook[100];
<<<<<<< HEAD
                printf("Tapez le titre du livre à supprimer : ");
=======
                printf("Tapez le titre du livre � supprimer : ");
>>>>>>> d90f700 (fini le project)
                scanf(" %49[^\n]", &sbook);
    
                for (int i = 0; i < index; i++) {
                    if (strcmp(titres[i], sbook) == 0) {
    
                            for (int j = i; j < index - 1; j++) {
                                strcpy(titres[j], titres[j + 1]);
                                strcpy(auteurs[j], auteurs[j + 1]);
                                prix[j] = prix[j + 1];
                                quantite[j] = quantite[j + 1];
                            }
                            index--;
<<<<<<< HEAD
                            printf("Livre supprimé avec succès.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Aucun livre trouvé avec ce titre.\n");
                }
                break;
=======
                            printf("Livre supprim� avec succ�s.\n");
                            } else {
                            printf("Suppression annul�e.\n");
                        }
                        found = 1;
                        break;
                        if (found != 1){
                        	printf("Aucun livre trouv� avec ce titre.\n");
						}
					}
                        break;
                    
>>>>>>> d90f700 (fini le project)
            case 6:
            // Nombre total de livres
            int totalQuantity;
                for (int i = 0; i < index; i++) {
                    totalQuantity += quantite[i];
                }
                printf("Le nombre total de livres en stock : %d\n", totalQuantity);
                break;
  		}
    }while(change != 7);
   return 0;
  }

<<<<<<< HEAD
  
=======
>>>>>>> d90f700 (fini le project)
