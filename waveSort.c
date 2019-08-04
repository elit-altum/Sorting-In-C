#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}

int main(){
      int size;
      printf("Enter number of values : ");
      scanf("%d", &size);

      int arr[size];
      for (int i = 0; i < size; i++){
            scanf(" %d", &arr[i]);
      }
      
      int j = 1;
      for(int i = 0; i < size - 2; i++){
            if( (arr[i] < arr[i + 1]) == j){
                  swap(&arr[i], &arr[i + 1] );
            }
            j++;
            j %= 2;
      }

      for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
      }
      getch();
      return 1;
}