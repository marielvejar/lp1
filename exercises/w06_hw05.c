#include <stdio.h>
int main(){
  int hileras, i,j=0, espacio;
  printf("Escribe un numero de hileras\n");
  scanf("%d",&hileras);
  for(i=1;i<=hileras;++i){
    for(espacio=1;espacio<=hileras-i;++espacio){
    printf(" ");
  }
  while(j!=2*i-1){
  printf("*");
  ++j;
  }
  j=0;
  printf("\n");
}
  return 0;
}
