#include<iostream>
using namespace std;
int n;
void get(int a[])
{
    cout<<"Enter array Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter at "<<i+1<<" : ";
        cin>>a[i];
    }
}
void dis(int a[])
{
    cout<<"\nArray Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nElement at "<<i+1<<" : ";
        cout<<a[i];
    }
}

void insert(int a[]){
    int pos,ele,j;
    cout<<"\nEnter position : ";
    cin>>pos;
    cout<<"Enter element : ";
    cin>>ele;
    j=n;
    while (j>=pos)
    {
        a[j+1] = a[j];
        j--;
    }

    a[pos] = ele;
    n++;
    

    
}

int main()
{
    int a[10];
    cout<<"Enter size of array : ";
    cin>>n;
    get(a);
    dis(a);
    insert(a);
    dis(a);
}