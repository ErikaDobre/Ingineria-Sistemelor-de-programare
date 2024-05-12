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
