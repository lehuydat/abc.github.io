#include<iostream>
#include<stdio.h>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
	int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
void nhap(float a[], float n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
float max(float a[], float n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
	float min (float a[],float n){
		float min = a[0];
		for(int i =0;i<n;i++)
		if(min < a[i])
		min =a[i];
		return min;
	}
	
	int main (){
	int a[10000];
	int n;
	printf ("\n nhap n =");
	scanf("%d",&n);
	nhap(a,n);
	printf("\nMax = %d", max(a, n));
    printf("\nMin = %d", min(a, n));
    return 0;
printf("\nMax = %f", max(a, n));
    printf("\nMin = %f", min(a, n));
    return 0;
	}
