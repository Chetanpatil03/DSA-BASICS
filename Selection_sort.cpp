#include<iostream>
using namespace std;

void SelectionSort(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int key=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[key] > a[j])
            {
                key=j;
            }
            
        }

        if(key!=i){
            int temp=a[key];
            a[key]=a[i];
            a[i]=temp;
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
    SelectionSort(arr,n);
    Display(arr,n);

}