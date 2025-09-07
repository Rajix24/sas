#include <stdio.h>
#include <string.h>

	int main (void){
		
	int size;
	char word[] = "youcode";
	//size = sizeof (word) - 1;	
	while (word[size] != '\0'){
    size++;
	}


  printf("%d\n", size);

	return 0;
}
