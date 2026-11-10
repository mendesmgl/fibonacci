#include <stdio.h>
int fbncounter (int n){
 if (n <= 0) return 0;
 if (n == 1) return 1;
 int i;
 int a = 0;
 int b = 1;
 int c;
 for (i=2; i<=n; i++){
  c = a + b;
  a = b;
  b = c;
 }
 return (b);
}
int main()
{
 int n, b;
 printf ("Escreva qual posição do número na sequência fibonacci você quer: \n");
 scanf ("%d", &n);
 b = fbncounter(n);
 printf ("O seu termo %d equivale ao número: %d \n",n,b);
 return 0;
}
