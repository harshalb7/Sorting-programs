
//   Name- Harshal Bhimrao Bodhare  Class-SE Division- A Roll No- 09


//						Assignment No -15
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
		cout<<"Enter the Marks of "<<n<<"students"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<"Marak of "<<i+1<<" student:";
			cin>>array[i];
		}
	}
	
	void insertionsort()
	{
		float arr[100];
		for(i=0;i<n;i++)
			arr[i]=array[i];
		
		cout<<"Marks of Students are:"<<endl;
		for( i=0;i<n;i++)
			cout<<arr[i]<<"\t";
			
		cout<<setw(8)<<"\n***************Sorting process***************"<<setw(8)<<endl<<endl;
		cout<<setw(8)<<"Step "<<"0"<<":"<<setw(8);
		for( i=0;i<n;i++)
			cout<<arr[i]<<setw(8);
		cout<<endl;
		
			
		for(i=0;i<n;i++)
		{
			cout<<"Step "<<i+1<<":"<<setw(8);
			float element=arr[i];
			j=i;
			
			while(j>0&&(arr[j-1]>element))
			{
				arr[j]=arr[j-1];
				j=j-1;
			}
			arr[j]=element;
			
				
			for(k=0;k<n;k++)
				cout<<arr[k]<<setw(8);
			cout<<endl;
		}
	}
	
	void shellshort()
	{
		int  swapped=0;
		int gap=n/2;
		do
		{	
			do
			{
				swapped=0;
				for(i=0;i<n-gap;i++)
				{
					if(a[i]>a[i+gap])
					{
					
						float temp=a[i];
						a[i]=a[i+gap];
						a[i+gap]=temp;
						swapped=1;
					}
				}
			}while(swapped==1);
		}while((gap=(gap/2))>=1);
	}
	float *re()
	{
		return array;
	}
	
	int max()
	{
		return n;
	}
	
	int quicksort(float arr[],int low,int high)
	{
		float pivot,temp;
		pivot=arr[low];
		i=low;
		j=high+1;
		do
		{
			do
			{
				i++;
			}while(arr[i]<pivot&&i<=high);
			do
			{
				j--;
			}while(arr[j]>pivot);
			
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}while(i<j);
		
		arr[low]=arr[j];
		arr[j]=pivot;
		
		return (j);
	}
	
	float *qiuck(float arr[],int low,int high)
	{
		int j ;
		if(low<high)
		{
			j=quicksort(arr,low,high);
			qiuck(arr,low,j-1);
			qiuck(arr,j+1,high);
		}
	
		return arr;
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
	sorting so;
	int ch;
	do
	{
		cout<<"\n**************************   Menu   *************************"<<endl;
		cout<<"1.Enter the Marks/Percentage of Students"<<endl;
		cout<<"2.Sort the Mark/Percentage of students using Insertion Sort"<<endl;
		cout<<"3.Sort the Mark/Percentage of students using Shell Sort"<<endl;
		cout<<"4.Sort the Mark/Percentage of students using Quick Sort"<<endl;
		cout<<"5.Display top FIVE Mark/Percentage of Students"<<endl;
		cout<<"6.EXIT"<<endl;
		cout<<"-------------------------------------------------------------"<<endl;
		cout<<"Choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				so.getmarks();
				break;
			case 2:
				cout<<"\n******************* Insertion Sort ********************"<<endl;
				so.insertionsort();
				break;
			case 3:
				cout<<"\n******************* Shell Sort ********************"<<endl;
				so.shellshort();
				break;
			case 4:
				cout<<"\n******************* Quick Sort ********************"<<endl;
				int i,n;
				float *count,*count1;
				n=so.max();
				float m[50];
				count=so.re();
				for(i=0;i<n;i++)
					m[i]=count[i];
				count1=so.qiuck(m,0,n-1);
				for(i=0;i<n;i++)
					cout<<setw(8)<<count1[i]<<setw(8);
				break;
			case 5:
				cout<<"\n******************* TOP FIVE ********************"<<endl;
				so.topfive();
				break;		
			case 6:
				cout<<"EXIT"<<endl;
				break;
		}
	}while(ch<6);
	return 0;
}
//          OUTPUT

/*

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:1
Enter Number of Students:10
Enter the Marks of 10students
Marak of 1 student:15.5
Marak of 2 student:13.6
Marak of 3 student:15.5
Marak of 4 student:79.6
Marak of 5 student:53.6
Marak of 6 student:82.23
Marak of 7 student:82.21
Marak of 8 student:55.63
Marak of 9 student:53.15
Marak of 10 student:77.8

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:2

******************* Insertion Sort ********************
Marks of Students are:
15.5	13.6	15.5	79.6	53.6	82.23	82.21	55.63	53.15	77.8	
***************Sorting process***************

   Step 0:    15.5    13.6    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 1:    15.5    13.6    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 2:    13.6    15.5    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 3:    13.6    15.5    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 4:    13.6    15.5    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 5:    13.6    15.5    15.5    53.6    79.6   82.23   82.21   55.63   53.15    77.8
   Step 6:    13.6    15.5    15.5    53.6    79.6   82.23   82.21   55.63   53.15    77.8
   Step 7:    13.6    15.5    15.5    53.6    79.6   82.21   82.23   55.63   53.15    77.8
   Step 8:    13.6    15.5    15.5    53.6   55.63    79.6   82.21   82.23   53.15    77.8
   Step 9:    13.6    15.5    15.5   53.15    53.6   55.63    79.6   82.21   82.23    77.8
   Step 10:    13.6    15.5    15.5   53.15    53.6   55.63    77.8    79.6   82.21   82.23

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:3

******************* Shell Sort ********************
Marks of Students are:
15.5	13.6	15.5	79.6	53.6	82.23	82.21	55.63	53.15	77.8	
***************Sorting process***************

   Step 0:    15.5    13.6    15.5    79.6    53.6   82.23   82.21   55.63   53.15    77.8
   Step 1:    15.5    13.6    15.5   53.15    53.6   82.23   82.21   55.63    79.6    77.8
   Step 2:    15.5    13.6    15.5   53.15    53.6   55.63    79.6    77.8   82.21   82.23
   Step 3:    13.6    15.5    15.5   53.15    53.6   55.63    77.8    79.6   82.21   82.23

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:4

******************* Quick Sort ********************
    13.6    15.5    15.5   53.15    53.6   55.63    77.8    79.6   82.21   82.23
**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:5

******************* TOP FIVE ********************
1.	82.23
2.	82.21
3.	79.6
4.	77.8
5.	55.63

**************************   Menu   *************************
1.Enter the Marks/Percentage of Students
2.Sort the Mark/Percentage of students using Insertion Sort
3.Sort the Mark/Percentage of students using Shell Sort
4.Sort the Mark/Percentage of students using Quick Sort
5.Display top FIVE Mark/Percentage of Students
6.EXIT
-------------------------------------------------------------
Choice:6
EXIT
*/
