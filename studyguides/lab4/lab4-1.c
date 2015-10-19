#include <stdio.h>
int main(){
  char n;
  scanf("%c",&n);
  if(n>47 && n<56){
    printf(" es un numero\n");
  }
  else if(n>=65 && n<91){
    printf(" es una letra mayuscula\n");
  }
  else if(n>=97 && n<123){
    printf("es una letra minuscula\n");
  }
  else{
    printf(" es un simbolo\n");
  }
  return 0;
}
