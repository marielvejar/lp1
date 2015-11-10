#include <stdio.h>
#include <string.h>
void *clear(void*ptr,int size){
char*bytes=  ptr;
int b;
for(b=0; b<size;b++){
bytes[b]=0;
}
return (void*) bytes;
}
int main(){
int i = 12323;
char c ='c';
float f= 3.141529;
char str[]="lol";
printf("%d %c %f %s\n",i,c,f,str);
clear(&i,sizeof(int));
clear(&c,sizeof(char));
clear(&f,sizeof(float));
clear(str,strlen(str)*sizeof(char));
printf("%d %c %f %s\n",i,c,f,str);
return 0;
}
