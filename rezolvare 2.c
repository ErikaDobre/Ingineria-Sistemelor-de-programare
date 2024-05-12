#include <stdio.h>
int parinte(int i);
int stanga(int i);
int dreapta(int i);

void swap(int v[], int i, int j);
int main (){
 int i, n, a[20];
 int d = 0; /* dimensiune heap */
 printf("n = "); scanf("%d", &n);
 for (i = 1; i <= n; ++i){
 printf("a[%d] = ",i);
 scanf("%d", &a[i]);
 }
 printf("\n vector nesortat: ");
 for (i = 1; i <= n; ++i)
 printf((i<n)?"%d, ": "%d.\n\n",a[i]);
 insertie_directa(a, n );
 printf("\n vector sortat: ");
 for(i = 1; i <= n; ++i)
 printf((i<n)?"%d, ": "%d.\n",a[i]);
 return 0;
}
int parinte(int i){
return (i/2);
}
int stanga(int i){
return (2*i);
}
int dreapta(int i){
return (2*i + 1);
}
void swap(int v[], int i, int j)

{
 int temp = v[i];
 v[i] = v[j];
 v[j] = temp;
}


  void insertie_directa(int a[], int n)
{
int j, valoare, i;
for(j = 2;j <= n; ++j) {
valoare = a[j];
i = j - 1;
while(i >= 1 && a[i] > valoare) {
a[i + 1] = a[i];
i = i - 1;
}
a[i + 1] = valoare;
}
}
