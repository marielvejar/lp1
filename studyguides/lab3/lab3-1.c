#include <stdio.h>
int main(){
 int a,b,s,r,p,d;
  scanf("%d %d", &a,&b);
  s=a+b;
  r=a-b;
  p=a*b;
  d=a/b;
  printf("su suma es %d \nresta %d\nproducto %d\n", s,r,p);
  if(a/b!=0){
    printf("su division es %d\n", d);
  }
else
printf("no se puede dividir con numeros enteros\n");
if(a<0){
a = a  * -1;
}
if(b<0){
b = b * -1;
}
printf("modulo de a : |%d|\nmodulo de b: |%d|\n",  a, b);
  return 0;
}
