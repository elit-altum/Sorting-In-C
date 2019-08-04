#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}

void selSort(int a[], int size){
      for(int i = 0; i < (size - 1);  i++){

            int minIndex = i;

            for(int j = i + 1; j < size; j++){
                  if(a[j] < a[minIndex]){
                        minIndex = j;
                  }
            }

            swap(&a[i], &a[minIndex]);    //Only one swapping per iteration is selection sort
      }
}

int main(){
      int size;
      scanf("%d", &size);

      int arr[size];

      for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
      }

      selSort(arr, size);

      for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }

      getch();
      return 1;
}