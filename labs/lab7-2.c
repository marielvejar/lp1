#include <stdio.h>
int main(){
int i;
char str[23]= {'\0'};
scanf("%s", str);
for(i=0;i<23;i++){
  printf("%c",str[i]);
}
printf("\n");
  for(i=23;i>=0;i--){
    printf("%c",str[i]);
  }
  printf("\n");
  return 0;
}
