#include <stdio.h>

int main () {
int tab [7];
int max=-99999;
int min=99999;
int suma=0;
double srednia;
for (int i = 0; i < 7; i=i+1) {
  scanf("%d", &tab[i]);
}

  //liczba największa/
  for (int i = 0; i < 7; i=i+1) {
  if (tab[i]>max){max=tab[i];
}
}
printf("max = %d",max );
  //liczby najmnijesza/
  for (int i = 0; i < 7; i=i+1) {
  if (tab[i]<min) {min=tab[i];

}
}
printf("min = %d",min );
  //średnia arytmetyczna elemetów tablicy
  for (int i = 0; i < 7; i=i+1){
  suma = suma + tab [i];
  srednia = (double) suma/ i;

}
  printf ("Suma: %d, średnia: %f\n\n" ,suma, srednia);
 //ilości liczby większej od stu/
  for (int i = 0; i < 7; i=i+1) {
  if (tab[i]<100){
  //printf("%d\n", );
}
}
return 0;
}
