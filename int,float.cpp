#include<stdio.h>
#include<math.h>
#define MAX 100
 
void nhap (int a[], int &n)
{
  //s? d?ng v�ng l?p do..while() d? y�u c?u ngu?i d�ng nh?p v�o s? ph?n t? c?a m?ng
    do
    {
        printf("\nNh?p v�o s? ph?n t?: ");
        scanf("%d", &n);
        //n?u s? ph?n t? kh�ng h?p l? th� in ra m�n h�nh
        if(n <= 0 || n > MAX)
        {
            printf("\nS? ph?n t? kh�ng h?p l?");
        }
    }while(n <= 0 || n > MAX);
    //d�ng v�ng l?p for d? nh?p c�c gi� tr? cho m?ng
    for(int i = 0; i < n; i++)
    {
        printf("\nNh?p a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
/* h�m xu?t c�c gi� tr? trong m?ng ra m�n h�nh */
void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}
void nhap (float b[], int &n)
{
  //s? d?ng v�ng l?p do..while() d? y�u c?u ngu?i d�ng nh?p v�o s? ph?n t? c?a m?ng
    do
    {
        printf("\nNh?p v�o s? ph?n t?: ");
        scanf("%d", &n);
        //n?u s? ph?n t? kh�ng h?p l? th� in ra m�n h�nh
        if(n <= 0 || n > MAX)
        {
            printf("\nS? ph?n t? kh�ng h?p l?");
        }
    }while(n <= 0 || n > MAX);
    //d�ng v�ng l?p for d? nh?p c�c gi� tr? cho m?ng
    for(int i = 0; i < n; i++)
    {
        printf("\nNh?p b[%d]: ", i);
        scanf("%f", &b[i]);
    }
}
/* h�m xu?t c�c gi� tr? trong m?ng ra m�n h�nh */
void xuat(float b[], int n)
	{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", b[i]);
    }
    }
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    float b[MAX];
    nhap(b, n);
    xuat(b, n);

    
}
