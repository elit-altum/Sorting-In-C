#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}

int partIndex(int a[], int start, int end){
      int pivot = a[end];
      int i = start - 1;

      for(int j = start; j < end; j++){
            if(a[j] <= pivot)
                  swap(&a[++i], &a[j]);                 
      }

      swap(&a[++i], &a[end]);
      return i;
}

void quickSort(int a[], int start, int end){
      if(start >= end)
            return;
      
      int index = partIndex(a, start, end);
      quickSort(a, start, index - 1); // dont pass index (instead of index - 1) in this function otherwise it becomes infinite loop
      quickSort(a, index + 1, end);
}

int main(){
      int size;
      scanf("%d", &size);

      int arr[size];

      for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
      }

      quickSort(arr, 0, size - 1);

      for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }

      getch();
      return 1;
}