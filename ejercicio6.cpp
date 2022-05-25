#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,a[100][100],n,k;
    cout<<"Ingrese el valor de n:";
    cin>>n;
    k=1;
    for(i=1;i<=n/2;i=i+1)
    {
                 for(j = i; j <= n-i; j = j + 1) // arriba
        {
            a[i][j]=k;
            k=k+1;
        }
                 for(j = i; j <= n-i; j = j + 1) // derecha
        {
            a[j][n-i+1]=k;
            k=k+1;
        }
                 for(j=n-i; j>=i + 1; j=j+1) // a continuación
        {
            a[n-i+1][j]=k;
            k=k+1;
        }
                 for(j = n-i + 1; j>= i + 1; j = j-1) // izquierda
        {
            a[j][i]=k;
            k=k+1;
        }
    }
    if(n%2==1)
    {
        i=(n+1)/2;
        a[i][i]=n*n;
    }
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n;j=j+1)
           cout<<a[i][j];
        cout<<n;
    }
    cout<<n;
}
