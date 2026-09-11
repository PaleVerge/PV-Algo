#include <iostream>
using namespace std;
#define N 6
//交换两个整数
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

//从标准输入读取n个数存入数组a（默认长度N）
void inputArr(int a[],int n=N)
{
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
}

//输出数组a的前n个数（默认长度N）
void outputArr(int a[],int n=N)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
//冒泡排序：对区间[beg,end]排序，order为'A'时升序，否则降序
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


//一维数组求和：求数组a前count个元素之和
int sumArray(const int a[],const int &count)
{
	int i,sum=0;
	for(i=0;i<count;i++)
	sum+=a[i];
	return sum;
}

//二维数组（列数为2）求和重载版本：求rows行所有元素之和
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

//向有序数组arr中插入newNumber：找到插入位置后，其后元素依次后移
//numEle为当前元素个数（引用传出），数组已满时返回false
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
//主函数：循环读入数字并插入有序数组，实时输出排序结果，直到数组满或用户选择停止
int main()
{
	int arr[N]={0};
	int num,count=0;
	bool success;
	char more;
	do
	{
		cout<<"请输入一个数字："<<endl;
		cin>>num;
		success=insertArr(arr,count,N,num);
		if(success==true)
		{
			cout<<"排序后的数组为："<<endl;
			outputArr(arr,count);		
			do
			{
				cout<<"是否继续输入？请输入 Y 或 N。"<<endl;
				cin>>more;
			}while(more!='Y'&&more!='y'&&more!='N'&&more!='n');	
			
		}
		else
		{
			cout<<"数组已满。"<<endl;
			more='N';
		}
	}while(more=='Y'||more=='y');
	
	
}

