#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}

void bubbleSort(int a[], int size){
      for(int i = size - 1; i >= 0; i--){

            for(int j = 0; j < i; j++){
                  if(a[j + 1] < a[j]){
                        swap(&a[j], &a[j + 1]); //swaps after every instance found
                  }
            }
      }
}

int main(){
      
      int size;
      scanf("%d", &size);

      int arr[size];

      for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
      }

      bubbleSort(arr, size);

      for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }
      
      getch();
      return 1;
}