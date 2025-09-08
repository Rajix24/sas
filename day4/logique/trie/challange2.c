#include <stdio.h>
// selaction sort 

void section(int a[], int size);


int main(){
    int b[] = {0,9,6,8,5,3,2,1,4,7};
    int size = 10;

    section(b, size);
        for (int i = 0; i < size; i++)
        {
            printf("b[%d] = %d\n", i, b[i]);
        }
    return 0;
}

void section(int a[],int size){

     for (int i = 0; i < size -1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_pos]){
                min_pos = j ;
            }

            if(min_pos != i){
                int temp = a[i];
                a[i] = a[min_pos];
                a[min_pos] = temp;
            }
        }
        
    }

}