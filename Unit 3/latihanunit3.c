#include <stdio.h>

int masukan;

int main(){
  scanf("%d\n", &masukan);
  int arr[masukan];
  for(int i = 0; i < masukan; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < masukan; i++){
    printf("%d ", arr[i]);
  }
}
