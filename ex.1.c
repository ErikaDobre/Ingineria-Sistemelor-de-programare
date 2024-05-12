#include <stdio.h>

#define NR 10
float f(float v[], int, int);
int main()
{
int n, i;
float v[NR];
printf("numarul de elemente din vector = ");
scanf("%d",&n);
for (i = 0; i < n; ++i){
printf("v[%d] = ", i);
scanf("%f", &v[i]);

}
printf("\n min = %7.3f\n", f(v, 0, n - 1) );
return 0;
}
float f(float v[], int p1, int p2)
{
int mijloc;
float min1, min2;
if (p1 == p2)
return v[p1];
else {
mijloc = (p1 + p2)/2;
min1 = f(v, p1, mijloc);
min2 = f(v, mijloc + 1, p2);
if (min1 < min2)
return min1;
else
return min2;
}
}
