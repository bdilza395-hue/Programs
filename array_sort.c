//WAP to sort an array in ascending or descending order in any method.(Selection sort)
#include<stdio.h>
void sort( int [],int );
int main(){
int a[10],i,n;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,n);
printf("Sorted array is\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
void sort(int a[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){//(if(a[i]>a[j])for ascending order and if(a[i]<a[j])for descending order)
temp=a[i];
a[i]=a[j];
a[j]=temp;
        }
    }
}
}