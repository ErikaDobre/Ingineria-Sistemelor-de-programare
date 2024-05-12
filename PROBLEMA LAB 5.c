#include <stdio.h>
void schimba(int a[], int x, int y);
int main()
{
 int n, i, a[50], schimbare,m,n_nou;
 printf("Dati nr de elemente: ");
 scanf("%d",&n);
 m=n;

 printf("Dati elementele \n");
 for( i = 0; i < n; ++i ){
 printf("a[%d]= ", i);
 scanf("%d",&a[i]);
 }
do{
 n_nou = 0;
 for( i = 0; i < n-1; ++i )
 if ( a[i] > a[i + 1] ){
 schimba( a, i, i + 1 );
 n_nou = i + 1;
 }
 n = n_nou;
}while( n_nou );

printf("Elementele sortate\n");
 for( i = 0; i < m; ++i )
 printf("%d \n", a[i]);
 return 0;
}
void schimba(int a[], int x, int y){
 int tmp = a[x];
 a[x] = a[y]; a[y] = tmp;
}
void quicksort(int a[],inf,sup);{
if(inf<sup)
{
    q=partitie(a,inf,sup);
    quicksort(a,inf,q);
    quicksort(a,q+1,sup);
}
}

 int partitie(a,inf,sup);
 {


int x=a[inf];
int i=inf-1;
int j=sup+1;
while(1)
{

do{
        j=j-1;
}while(a[j]>x)
do
{
    i=i+1;
}while(a[i]<x)
if(i<j)
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
    return j;
}
 }
