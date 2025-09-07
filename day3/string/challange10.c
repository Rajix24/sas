#include <stdio.h>
#include"rstring.h"
#include<string.h>

int main (){

  char san[200];
  char word[50];
  
  printf ("enter: ");
  fgets(san, sizeof(san), stdin);

  printf ("enter: ");
  fgets(word, sizeof(word), stdin);

  if(strcmp(san, word) ==0){
    printf("la sous-chaîne est trouvée \n");
  }else{
    printf("la sous-chaine est pas exist\n");
  }


  return 0;
}
