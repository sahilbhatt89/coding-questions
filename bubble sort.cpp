#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
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
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if (a[j-1]>a[j])
			{
				swap(&a[j-1],&a[j]);
			}
		}
	}
	display(a, n);
}
