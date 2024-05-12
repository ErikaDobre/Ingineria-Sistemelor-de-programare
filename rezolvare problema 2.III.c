#include <stdio.h>
#include <string.h>
struct student{
 char nume[10], prenume[10];
 int nota;
};
void sch(struct student a[], int x, int y);
void selSort(struct student a[], int n);
int main()
{
 int n, i;
 struct student a[50];
 printf("Dati nr de studenti: ");
 scanf("%d",&n);
 printf("\n Datele studentilor \n");
 for( i = 0; i < n; ++i ){
 printf("\n student[%d] \n", i);
 printf("nume = "); scanf("%s", &a[i].nume);
 printf("prenume = "); scanf("%s", &a[i].prenume);
 printf("nota exam = "); scanf("%d", &a[i].nota);
 }
 selSort(a, n);
 printf("\n DATELE SORTATE\n");
 for( i = 0; i < n; ++i ){
 printf("\n student[%d] \n", i);
 printf("nume = %s \n", a[i].nume);
 printf("prenume = %s \n", a[i].prenume);
 printf("nota examen = %d \n", a[i].nota);
 }

 return 0;
}
void sch(struct student a[], int x, int y) {
 struct student tmp = a[x];
 a[x] = a[y];
 a[y] = tmp;
}
void selSort(struct student a[], int n) {
 int i, j, minIndex;
 for (i = 0; i < n - 1; i++) {
 minIndex = i;
 for (j = i + 1; j < n; j++)
 if (strcmp(a[j].nume, a[minIndex].nume) < 0 || strcmp(a[j].prenume, a[minIndex].prenume)<0)
     minIndex = j;
 if (minIndex != i)
 sch(a, i, minIndex);
 }
}

