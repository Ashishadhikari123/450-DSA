#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of k"<<endl;
	cin>>k;
	sort(arr,arr+n);
	cout<<arr[k-1];
	return 0;
}