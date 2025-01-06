#include<iostream>
using namespace std;

void BubbleSort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
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
    BubbleSort(arr,n);
    Display(arr,n);

}