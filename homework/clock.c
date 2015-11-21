#include <stdio.h>
#include <math.h>
/*Necetimos en primer lugar la libreria math.h (además de la primordial libreria stdio.h), puesto a que utilizaresos la operacion %, ya que se requiere analizar el angulo si es divisible por 6. */
int main(){
int x,Angulo;/*Declaramos dos enteros "x" y "Angulo"*/
while(scanf("%d",&Angulo)==1){
/*Usando la funcion iterativa de while  tiene que tener valor verdadero,
Si se usa scanf no dentro de la condicion de while, el programa igual funciona, pero de acuerdo al UVA Online judge se tarda más. */
if(0<=Angulo && Angulo<=180){/*se analiza si el angulo cumple el requisito de estar en un intervalo cerrado [0, 180].*/
  x=Angulo%6;
  puts((x==0)? "Y":"N");/*si el resto de x es 0 entonces se desplegará Y (yes), en caso contrario N (No) */
}
else
/*si no se cumple la condicion anterior, se termina el programa con break*/
break;
}
  return 0;
}/*Con return 0 damos finalizado el programa*/
