#include <stdio.h>
int main (){

  int age = 20;
  char type;
  double montant = 100;

  printf("enter car type: ");
  scanf("%c", &type);

  if(age <= 25){
    if (type == 'S'){
      montant = montant * 1.5 * 2;
      printf("prime dans c'est ca: %lf", montant);
    }else if (type == 'U'){
      montant = montant * 1.5 * 1.2;
      printf("prime dans c'est ca: %lf", montant);
    }else if (type == 'F'){
      montant = montant *1.5*1.1;
      printf("prime dans c'est ca: $lf", montant);
    }else {printf("prime dans c'est ca: %lf", montant);}
  }



  return 0;
}
