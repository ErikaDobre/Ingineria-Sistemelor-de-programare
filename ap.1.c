#include <stdio.h>
int caut(int v[], int n, int x);
int main()
{
int n, x, i, gasit, a[50];
printf("Dati nr de elemente ale sirului : ");
scanf("%d",&n);
printf("Dati numarul de cautat : ");
scanf("%d", &x);
printf("Dati elementele sirului \n");
for(i = 0; i < n; ++i){
printf("a[%d]= ", i);
scanf("%d",&a[i]);
}
gasit = caut(a, n, x);
if (gasit == 1)


printf("Numarul apartine sirului ! \n");
else
printf("Numarul nu apartine sirului ! \n");
}
int caut(int v[], int n, int x)
{
int i;
for(i = 0; i < n; ++i)
if (v[i] == x)
return 1;
return 0;
}
