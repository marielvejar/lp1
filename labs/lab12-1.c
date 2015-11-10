#include<stdio.h>
void swap(int *x, int *y){
int c = *x;
*x = *y;
*y = c;
return; 
}
int main(){
int n,m;
int *a=&n, *b=&m;
scanf("%d %d",&n,&m);
printf("%d %d\n",n,m);
swap(a,b);
printf("%d %d\n",*a,*b);
return 0;
}
