#include <stdio.h>
#include<stdbool.h>



void bubble(int a[], int size);

/*
// bubble sort:
int main (){
    int a[] = {9,8,7,6,5,4,3,2,1,0};

    int lenght = 10;

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; i < lenght - 1; i++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[ j + i];
                a[j+1] = temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < lenght; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    

  
    return 0;
}
*/
//2 optimation:

int main (){

    int a[] = {9,8,7,6,5,4,3,2,1,0};
    int size = 10;

    bubble(a, size);

    for (int i = 0; i < size; i++)
    {
         printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
/*
void bubble(int a[], int size)
{
        for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < (size -i - 1); i++)// -i to the last element not used
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[ j + i];
                a[j+1] = temp;
            }
            
        }
        
    }
}
*/
void bubble(int a[], int size)
{
    bool swapped = false;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; i < (size -i - 1); i++)// -i to the last element not used
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[ j + i];
                a[j+1] = temp;
                swapped = true;
            }   
        }
        i++;
    }while (swapped);
    
}