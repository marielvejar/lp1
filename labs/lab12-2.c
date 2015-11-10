#include <stdio.h>
void addl(int *x, int *y){
*y = *x+*y;
return;
}
int main(){
int a,b;
int *x=&a, *y=&b;
scanf("%d %d",&a,&b);
printf("%d %d\n",a,b);
addl(x,y);
printf("suma: %d\n",*y);
return 0;
}
