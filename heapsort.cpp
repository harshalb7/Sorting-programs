#include<iostream>
using namespace std;

class Array
{
	int a[20];
	int n;

	public:
		Array()
		{
			n=10;
			int b[10]={129,30,80,60,10,5,122,92,69,55};
			for(int i=0;i<n;i++)
				a[i]=b[i];
		}

		void display()
		{
			for (int i = 0; i <n; i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}

		void heapsort()
	 {
	 	for(int i=(n-1)/2;i>=0;i--)
	 	{
	 		reheapdown(i,n);
	 		//display();
	 	}
	 	int n1=n;
	 	n1--;
	 	
	 	while(n1>1)
	 	{
	 		int t=a[n1];
	 		a[n1]=a[0];
	 		a[0]=t;
	 		reheapdown(0,n1);
	 		n1--;
	 		display();
	 	}
	 	
	 }//end of heapsort
	 
	 void reheapdown(int m,int n)
	 {
	 	int l;
	 	int r;
	 	
	 	while((2*m+1)<n)
	 	{
	 		l=2*m+1;
	 		r=2*m+2;
	 			
	 		if(a[l]>a[r]&&l<n)
	 		{
	 			
	 			if(a[m]<=a[l])
	 			{
	 				int t=a[m];
	 				a[m]=a[l];
	 				a[l]=t;
	 			}
	 			else 
	 				break;
	 		}
	 		else if (a[l]<=a[r]&&r<n)
	 		{
	 			l=r;
	 			if(a[m]<=a[l])
	 			{
	 				int t=a[m];
	 				a[m]=a[l];
	 				a[l]=t;
	 			}
	 			else 
	 				break;
	 		}
	 		else 
	 			break;		
	 		m=l;
	 	}
	 }
};

int main()
{
	Array A;
	A.display();
	A.heapsort();
	A.display();
	return 0;
}