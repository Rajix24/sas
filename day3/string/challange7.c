#include <stdio.h>
#include "rstring.h"//costame one for linux 
#include <string.h>//not working on linux 

int main (void){
  
  char mot[] = "youcode";

  strupr(mot);

  printf ("%s\n", mot);

return 0;
}
