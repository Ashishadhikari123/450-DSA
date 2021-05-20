#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int *p=new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n/2;i++)
    {
        temp=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=temp;
    }
    cout<<"Array after reverse operation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    delete[] p;
    return 0;
}
