#include<stdio.h>
#include<conio.h>

void insertionSort(int a[], int size){
      int key;
      for(int i = 1; i < size; i++){
            key = a[i];
            int j = i - 1;

            while( j >= 0 && a[j] > key){
                  a[j + 1] = a[j];
                  j--;
            }
             a[j + 1] = key;
      }
}

int main(){
      int size;
      scanf("%d", &size);

      int arr[size];

      for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
      }

      insertionSort(arr, size);

      for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }
      getch();
      return 1;
}