#include<iostream>
#include<iomanip>
using namespace std;
class sorting
{
	int n;
	int i;
	int j;
	int k;
	float array[100];

	public:
	
	sorting()
	{
		for(i=0;i<100;i++)
			array[i]=0;
	}
	
	void getmarks()
	{
		cout<<"Enter Number of Students:";
		cin>>n;
		cout<<"Enter the Marks of "<<n<<" students"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<"Marak of  "<<i+1<<"  student:";
			cin>>array[i];
		}
	}
	void bubblesort()
	{
		float arr[100];
		for(i=0;i<n;i++)
			arr[i]=array[i];
		cout<<"Marks of Students are:"<<endl;
		for( i=0;i<n;i++)
			cout<<setw(8)<<arr[i]<<setw(8);
		cout<<setw(8)<<"\n***************Sorting process***************"<<setw(8)<<endl<<endl;
		cout<<setw(8)<<"Step "<<"0"<<":"<<setw(8);
		for( i=0;i<n;i++)
			cout<<setw(8)<<arr[i]<<setw(8);
		cout<<endl;
		for(i=0;i<n;i++)
		{
			cout<<"Step "<<i+1<<":"<<setw(8);
			for(j=0;j<n-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					float temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}		
			}
			
			for(k=0;k<n;k++)
					cout<<arr[k]<<setw(8);
			cout<<endl;
		}	
	}
	void  selectionsort()
	{
		float a[100];
		for(i=0;i<n;i++)
			a[i]=array[i];
			
		cout<<"Marks of Students are:"<<endl;
		for( i=0;i<n;i++)
			cout<<a[i]<<setw(8);
		cout<<setw(8)<<"\n***************Sorting process***************"<<setw(8)<<endl<<endl;
		cout<<setw(8)<<"Step "<<"0"<<":"<<setw(8);
		for( i=0;i<n;i++)
			cout<<setw(8)<<a[i]<<setw(8);
		cout<<endl;
		
		for(i=0;i<n;i++)
		{
			cout<<"Step "<<i+1<<":"<<setw(8);
			int index_min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[index_min])
					index_min=j;
				{
					float temp;
					temp=a[i];
					a[i]=a[index_min];
					a[index_min]=temp;
				}
			}
			for(k=0;k<n;k++)
				cout<<a[k]<<setw(8);
			cout<<endl;
		}
	}
	void mergesort(float arr[],int low,int high,int mid)
	{
		float c[100];
		i=low;
		j=mid+1;
		k=low;
		
		while(i<=mid && j<=high)
		{
			if(arr[i]<arr[j])
			{
				c[k]=arr[i];
				k++;
				i++;
			}
			else
			{
				c[k]=arr[j];
				k++;
				j++;
			}
		}
		while(i<=mid)
		{
			c[k]=arr[i];
			k++;
			i++;
		}
		while(j<=high)
		{
			c[k]=arr[j];
			k++;
			j++;
		}
		for(i=low;i<k;i++)
		{
			arr[i]=c[i];
		}
	}
	
	float *merge(float arr[],int low,int high)
	{
		int mid;
		if(low<high)
		{
			mid=(low+high)/2;
			merge(arr,low,mid);
			merge(arr,mid+1,high);
			mergesort(arr,low,high,mid);
		}
		return arr;
	}
	
	float *re()
	{
		return array;
	}
	
	int max()
	{
		return n;
	}
	void topfive()
	{

		float first,second,third,fourth,fifth;
		for(i=0;i<n;i++)
		{
			if(array[i]>first)
			{
				fifth=fourth;
				fourth=third;
				third=second;
				second=first;
				first=array[i];
			}
			else if(array[i]>second)
			{
				fifth=fourth;
				fourth=third;
				third=second;
				second=array[i];	
			}
			else if(array[i]>third)
			{
				fifth=fourth;
				fourth=third;
				third=array[i];
			}
			else if(array[i]>fourth)
			{
				fifth=fourth;
				fourth=array[i];
			}
			else if(array[i]>fifth)
			{
				fifth=array[i];
			}
		}	
		cout<<"1.\t"<<first<<endl<<"2.\t"<<second<<endl<<"3.\t"<<third<<endl<<"4.\t"<<fourth<<endl<<"5.\t"<<fifth<<endl;
	}	
};

int main()
{
	sorting s;
	int ch;
	do
	{
		cout<<"\n**************************   Menu   *************************"<<endl;
		cout<<"1.Enter the Marks/Percentage of Students"<<endl;
		cout<<"2.Sort the Mark/Percentage of students using Selection Sort"<<endl;
		cout<<"3.Sort the Mark/Percentage of students using Bubble Sort"<<endl;
		cout<<"4.Sort the Mark/Percentage of students using Merge Sort"<<endl;
		cout<<"5.Display top FIVE Mark/Percentage of Students"<<endl;
		cout<<"6.EXIT"<<endl;
		cout<<"-------------------------------------------------------------"<<endl;
		cout<<"Choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				
				s.getmarks();
				break;
			case 2:
				cout<<"\n******************* Selection Sort ********************"<<endl;
				s.selectionsort();
				break;
			case 3:
				cout<<"\n******************* Bubble Sort ********************"<<endl;
				s.bubblesort();
				break;
			case 4:
				cout<<"\n******************* Merge Sort ********************"<<endl;
				int i,n;
				float *count,*count1;
				n=s.max();
				float m[50];
				count=s.re();
				for(i=0;i<n;i++)
				{
					m[i]=count[i];
				}
				count1=s.merge(m,0,n-1);
				for(i=0;i<n;i++)
					cout<<setw(8)<<count1[i]<<setw(8);
				break;
			case 5:
				cout<<"\n******************* TOP FIVE ********************"<<endl;
				s.topfive();
				break;		
			case 6:
				cout<<"EXIT"<<endl;
				break;
		}
	}while(ch<6);
	return 0;
}

// OUTPUT
/*

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:1
Enter Number of Students:10
Enter the Marks of 10 students
Marak of  1  student:13.2
Marak of  2  student:13.5
Marak of  3  student:56.3
Marak of  4  student:45.9
Marak of  5  student:45.8
Marak of  6  student:44.6
Marak of  7  student:78.3
Marak of  8  student:66.0
Marak of  9  student:45
Marak of  10  student:78.9

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:2

******************* Selection Sort ********************
Marks of Students are:
13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
***************Sorting process***************

   Step 0:    13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
   Step 1:    13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
   Step 2:    13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
   Step 3:    13.2    13.5    44.6    56.3    45.9    45.8    78.3      66      45    78.9
   Step 4:    13.2    13.5    44.6    45.8    56.3    45.9    78.3      66      45    78.9
   Step 5:    13.2    13.5    44.6    45.8    45.9    56.3    78.3      66      45    78.9
   Step 6:    13.2    13.5    44.6    45.8    45.9    56.3    78.3      66      45    78.9
   Step 7:    13.2    13.5    44.6    45.8    45.9    56.3      66    78.3      45    78.9
   Step 8:    13.2    13.5    44.6    45.8    45.9    56.3      66    78.3      45    78.9
   Step 9:    13.2    13.5    44.6    45.8    45.9    56.3      66    78.3      45    78.9
   Step 10:    13.2    13.5    44.6    45.8    45.9    56.3      66    78.3      45    78.9

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:3

******************* Bubble Sort ********************
Marks of Students are:
    13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
***************Sorting process***************

   Step 0:    13.2    13.5    56.3    45.9    45.8    44.6    78.3      66      45    78.9
   Step 1:    13.2    13.5    45.9    45.8    44.6    56.3      66      45    78.3    78.9
   Step 2:    13.2    13.5    45.8    44.6    45.9    56.3      45      66    78.3    78.9
   Step 3:    13.2    13.5    44.6    45.8    45.9      45    56.3      66    78.3    78.9
   Step 4:    13.2    13.5    44.6    45.8      45    45.9    56.3      66    78.3    78.9
   Step 5:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
   Step 6:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
   Step 7:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
   Step 8:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
   Step 9:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
   Step 10:    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:4

******************* Merge Sort ********************
    13.2    13.5    44.6      45    45.8    45.9    56.3      66    78.3    78.9
**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:5

******************* TOP FIVE ********************
1.	78.9
2.	78.3
3.	66
4.	56.3
5.	45.9

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Selection Sort
3.Sort the Mark/Percentage of students using Bubble Sort
4.Sort the Mark/Percentage of students using Merge Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:6
EXIT
*/
