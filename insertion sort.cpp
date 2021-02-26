#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int k)
{
	int temp,j;
	for(int i=1;i<k;i++)
	{
		int temp;
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
void display(int arr[],int b)
{
	for(int i=0;i<b;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionsort(a,n);
	display(a,n);
}
