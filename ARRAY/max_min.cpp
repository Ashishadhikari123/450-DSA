#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	cout<<"maximum element = "<<max<<endl;
	cout<<"minimum element = "<<min;
	return 0;
}