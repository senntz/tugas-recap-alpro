#include <stdio.h>

int i, j, temp;

int main(){
  scanf("%d/n", &i);
  if(i > 0){
    while(i != 0){
      scanf("%d", &j);
      temp += j;
      i--;
    }
    printf("%d", temp);
  } else {
    printf("Tidak Ada transaksi hari ini");
  }
}
