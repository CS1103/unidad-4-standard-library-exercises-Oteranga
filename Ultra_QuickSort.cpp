//
// Created by Alejandro  Otero on 2019-11-17.
//

/*{
#include<iostream>

using namespace std;

const int sz=5000;
int a[sz],L[(sz/2)+5],R[(sz/2)+5];
long int cont;

void merge(int p,int q,int r)
{
    int ind1,ind2,k,i,j;
    for(i=p,ind1=1; i<=q; i++)
        L[ind1++]=a[i];
    L[ind1]=2000;
    for(i=q+1,ind2=1; i<=r; i++)
        R[ind2++]=a[i];
    R[ind2]=2000;
    i=j=1;
    for(k=p; k<=r; k++)
    {
        if(L[i]>R[j])
        {
            cont+=ind1-i;
            a[k]=R[j];
            j++;
        }
        else
        {
            a[k]=L[i];
            i++;
        }
    }
}

void mergesort(int p,int r)
{
    if(p<r)
    {
        int q;
        q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);

    }
}

int main()
{
    int n,i;
    while(n!=0)
    {
        cin>>n;
        for(i=1; i<=n; i++)
            cin>>a[i];
        cont=0;
        mergesort(1,n);
        if(n!=0)
            cout<<cont<<endl;
    }
    return 0;
}
}