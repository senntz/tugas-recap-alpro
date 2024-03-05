#include <stdio.h>

int sisi;

int keliling(int s){
  return 4*s;
}

int luas(int s){
  return s*s;
}

int volume(int s){
  return s*s*s;
}

int main(){
  scanf("%d", &sisi);
  printf("%d\n", keliling(sisi));
  printf("%d\n", luas(sisi));
  printf("%d", volume(sisi));
}
