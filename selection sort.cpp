#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void display(int arr[],int k)
{
	for(int i=0;i<k;i++)
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
	int index=0,temp=0;
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<temp)
			{
				temp=a[j];
				index=j;
			}
		}
		swap(&a[i],&a[index]);
	}
	display(a,n);
}
