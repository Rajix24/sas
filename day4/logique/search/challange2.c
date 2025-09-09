#include <stdio.h>


int binary(int arr[], int A, int l, int r);

int main (){

    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(arr)/sizeof(arr[0]);
    int index, num;

    printf("enter number: ");
    scanf("%d", &num);
    getchar();

    index = binary(arr, num, 1, size);

    if(index == -1){
        printf("\nnumber that you enter is not exist: %d\n", num); 
        return 0;   
    }else{
    printf("number that you enter is exist: %d\n", index);}

    return 0;
}
int binary(int arr[], int A, int min, int max){

    int mid = min + ( max - min )/2;
    if (min > max)
    {
        return -1;
    }

    if (arr[mid] == A) 
    {
        return mid;
    }else if (arr[mid] < A){
        return binary(arr, A, mid + 1, max);
    }else{
        return binary(arr, A, min, mid -1);
    }
}