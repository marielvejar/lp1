#include <stdio.h>
int main(){
  int hileras, i,j, espacio;
  printf("Escribe un numero de hileras\n");
  scanf("%d",&hileras);
  for(i=hileras;i>=1;--i){
    for(espacio=0;espacio<hileras-i;++espacio)
    printf(" ");
    for(j=i;j<=2*i-1;++j)
    printf("*");
    for(j=0;j<i-1;++j)
    printf("*");
    printf("\n");
  }
  return 0;
}
