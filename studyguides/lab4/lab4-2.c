#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b & a>c){
    printf("%d es mayor a %d y %d\n",a,b,c);
  }
  else if(b>a && b>c){
    printf("%d es mayor a %d y %d\n",b,a,c);
  }
  else if(c>a && c>b){
    printf("%d es mayor a %d y %d\n",c,a,b);
  }
  else{
    printf("los tres numeros son iguales!\n");
  }
  return 0;

}
