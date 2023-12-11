/*
Write a function template for selection sort that inputs, sorts and outputs
an integer array and a float array.
*/


#include <iostream>
using namespace std;
#define size 10

int n;
template<class T>
void SelSort(T A[size])
{
    int i,j,min,temp;
    for(i=0;i<=n-1;i++)
    {
        min=i;
        for(j=i;j<=n-1;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nSorted list : \n";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<A[i];
    }
}

int main()
{
    int i,A[size];
    float B[size];
    cout<<"Selection Sort\n";
    cout<<"\nInteger Element\n";
    cout<<"Enter how many elements you want\n";
    cin>>n;
    cout<<"\nEnter the int elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    SelSort(A);

    cout<<"\nFloat Element\n";
    cout<<"Enter how many elements you want\n";
    cin>>n;
    cout<<"\nEnter the int elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    SelSort(B);

    return 0;
}
