#include<iostream>
using namespace std;

class Matrix
{
    int a[5][5],b[5][5],op[5][5],i,j,k,r1,r2,c1,c2;
    public:
            void get();
            void dis();
            void sum();
            void sub();
            void tran();
            void mult();
};
void Matrix::get()
{
    //Matrix 1
    cout<<"Enter first Matrix "<<endl;
    cout<<"Enter row :";
    cin>>r1;
    cout<<"Enter column : ";
    cin>>c1;
    cout<<"Enter matrix elements:";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    

    //Matrix 2
    cout<<"Enter Second Matrix "<<endl;
    cout<<"Enter row :";
    cin>>r2;
    cout<<"Enter column : ";
    cin>>c2;
    cout<<"Enter matrix elements:";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
        
    }
}

void Matrix::dis()
{
    cout<<"Elements of Matrix A :"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c1; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Elements of Matrix B :"<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            cout<<"\t"<<b[i][j];
        }
        cout<<endl;
        
    }
    
}

void Matrix::sum()
{
    cout<<"Addition of Matrix A and Matrix B :"<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            op[i][j] = a[i][j] + b[i][j];
            cout<<"\t"<<op[i][j];
        }
        cout<<endl;
        
    }
}

void Matrix::sub()
{
    cout<<"Subtraction of Matrix A and Matrix B :"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            op[i][j] = a[i][j] - b[i][j];
            cout<<"\t"<<op[i][j];
        }
        cout<<endl;
        
    }
}

void Matrix::tran()
{
    cout<<"Transpose of Matrix A :"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            op[i][j] = a[j][i];
            cout<<"\t"<<op[i][j];
        }
        cout<<endl;
        
    }

    cout<<"Transpose of Matrix B :"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            op[i][j] = b[j][i];
            cout<<"\t"<<op[i][j];
        }
        cout<<endl;
        
    }
}

void Matrix::mult()
{
    cout<<"Multiplication of Matrix A and Matrix B :"<<endl;
    // for (int i = 0; i < r1; i++)
    // {
    //     for (size_t j = 0; j < c2; j++)
    //     {
    //         op[i][j] = a[i][j] - b[i][j];
    //         cout<<"\t"<<op[i][j];
    //     }
    //     cout<<endl;
        
    // }
}

int main()
{
    Matrix m;
    m.get();
    m.dis();
    m.sum();
    m.sub();
    // m.mult();
    m.tran();
}