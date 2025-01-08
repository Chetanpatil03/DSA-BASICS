#include<iostream>
using namespace std;

void InsertionSort(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int key=a[i];
        int j=i-1;
        while(a[j] > key && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
       
    }
}

void Display(int a[],int n)
{
    cout<<"\nArray elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
    
}

int main()
{
    int arr[]={10,65,17,59,8,58,6,9,4};
    int n= sizeof(arr)/sizeof(int);

    cout<<"\nBefore Swapping :";
    Display(arr,n);
    cout<<"\nAfter Swaping : ";
    InsertionSort(arr,n);
    Display(arr,n);

}