#include <iostream>
using namespace std;
#define N 6
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void inputArr(int a[],int n=N)
{
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
}

void outputArr(int a[],int n=N)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void sort(int a[],int beg=0,int end=N-1,char order='A')
{
	int i,j;
	int temp;
	if(order=='A')
	{
		for(i=0;i<end-beg;i++)
		{
			for(j=beg;j<end-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}	
	}
	else
	{
		for(i=0;i<end-beg;i++)
		{
			for(j=beg;j<end-i;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	
}


int sumArray(const int a[],const int &count)
{
	int i,sum=0;
	for(i=0;i<count;i++)
	sum+=a[i];
	return sum;
}

int sumArray(const int a[][2],int rows)
{
	int i,j,sum=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=1;j++)
		{
			sum+=a[i][j];
		}
	}
	return sum;
}

bool insertArr(int arr[],int &numEle,int arrSize,int newNumber)
{
	int pos=0;
	if(numEle==0)
	{
		arr[0]=newNumber;
		numEle++;
		return true;
	}
	if(numEle==arrSize)
	{
		return false;
	}
	else
	{
		while(pos<numEle&&newNumber>arr[pos]) 
		{
			pos++;
		}
		for(int i=numEle;i>pos;i--)
		arr[i]=arr[i-1];
		arr[pos]=newNumber;
		numEle++;
		return true;		
	}	
}
int main()
{
	int arr[N]={0};
	int num,count=0;
	bool success;
	char more;
	do
	{
		cout<<"please input a number:"<<endl;
		cin>>num;
		success=insertArr(arr,count,N,num);
		if(success==true)
		{
			cout<<"sorted array is: "<<endl;
			outputArr(arr,count);		
			do
			{
				cout<<"Any more element? please input Y or N."<<endl;
				cin>>more;
			}while(more!='Y'&&more!='y'&&more!='N'&&more!='n');	
			
		}
		else
		{
			cout<<"The array is full."<<endl;
			more='N';
		}
	}while(more=='Y'||more=='y');
	
	
}

