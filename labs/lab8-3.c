#include<stdio.h>
int main(){
int A[2][2];
int i,j;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&A[i][j]);
}}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("%d ",A[i][j]);
	}
printf("\n");
}
printf("en 90° grados es:\n");
printf("%d %d\n%d %d\n",A[1][1],A[1][0],A[0][1],A[0][0]);
return 0;
}
