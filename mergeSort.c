#include<stdio.h>
#include<conio.h>

void merge(int arr[], int start, int end){
      int mid = (start + end) / 2;
      int i = start;    //for the first half of array
      int j = mid + 1;  //for second half of array
      int k = start;    //for the temporary array

      int temp[100];

      while(i <= mid && j <= end){
            if(arr[i] < arr[j])
                  temp[k++] = arr[i++];
            else
                  temp[k++] = arr[j++];
      }

      while(i <= mid){
            temp[k++] = arr[i++];
      }
      while(j <= end){
            temp[k++] = arr[j++];
      }

      //copy the array
      for(int i = start; i <= end; i++){
            arr[i] = temp[i];
      }
}

void mergeSort(int arr[], int start, int end){
      if(start >= end){
            return;
      }

      int mid = (start + end) / 2;
      mergeSort(arr, start, mid);
      mergeSort(arr, mid + 1, end);

      //This piece of code will only run when both above functions have completed
      //their run or returned
      merge(arr, start, end);

}
int main(){
      int size;
      scanf("%d", &size);

      int arr[size];

      for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
      }

      mergeSort(arr, 0 , size - 1);

      for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }

      getch();
      return 1;
}