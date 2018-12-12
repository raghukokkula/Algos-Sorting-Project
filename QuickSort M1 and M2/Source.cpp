#include <iostream>
#include <string>
#include <fstream>

int count=0;
int count1=0;

using namespace std;
ifstream infile;
ofstream outfile;


bool leq( int el1 , int el2 )
{
	::count++;
	return el1<=el2;
}

void swap(int *y,int *z)
{
    int temp = *y;
    *y = *z;
    *z = temp;
}


int partition(int arr[10000], int left, int right)
{
	int index=left; 
	for(int i=left; i<right;i++)
	{
		if(leq(arr[i] , arr[right]))
		{
			swap(&arr[i], &arr[index]);
			index++;
		}
	}
	swap(&arr[right], &arr[index]);
	return index;
}

void Quicksort(int arr[10000], int left, int right)
{
	if(left<right)
	{
		int pivot = partition(arr, left, right);
		Quicksort(arr, left, pivot-1);
		Quicksort(arr, pivot+1, right);
	}	
}




int main()
{
	ifstream thefile("input.txt");
	int rows, columns;
	int a=0;
	int i; int j; int t=0; 
	int arrr[100][100];
	int arr[10000];	
	thefile >> rows;
	thefile >> columns;
	cout << "rows=" << rows << " " <<"columns=" << columns << " " <<endl;
	for(i=0; i<rows*columns; i++)
		{
			thefile >> arr[i];
			cout << arr[i] << " " ;
		}
    a=rows*columns;
	Quicksort(arr, 0, a-1);
	cout<< "\n""\n""\n"<<"sorted 1-D array" <<endl;
	for(int t=0; t<a; t++)
	{
		cout<< arr[t]<<" ";
	}
	cout<< "\n""\n""\n"<<"sorted 2-D array" "\n"<<endl;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
        arrr[i][j]=arr[t++];
		cout<< arrr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	outfile.open ("vk0018_1.txt");
	for (i = 0; i < rows; i++)
	{
		outfile << "\n";
		for (j = 0; j < columns; j++)
		{
        outfile << arrr[i][j]<< " ";
		}
	}
	count1=::count;
	cout<< "\n""count="<<count1;
	outfile <<endl<<"count=" <<::count;
	outfile.close();
	
	/*method 2*/


	infile.open("input.txt");
	int arows[100]; int row,column; int tr=0; int arrows[100][100]; int ar=0;
	cout<<"\n\n""Method 2 Starts";
	infile>>rows; infile>>columns;
	cout <<"\n""rows=" << rows << " " <<"columns=" << columns << " " <<endl;
	cout<<"\n\nRow-Wise Sorted Array\n";
	for(column=0; column<rows; column++)
	{
	
	for(row=0; row<columns; row++)
	{
		infile>> arows[row];
				
	}
		
		ar=columns;
		Quicksort(arows, 0, ar-1);
		
	
		for (int ir = 0; ir < columns; ir++)
		{
        arrows[ir][column]=arows[ir];
		cout<< arrows[ir][column]<<" ";
		
		}
		cout<<"\n";
		
			
	}
	cout<<"\n";cout<<"\n";
	cout<<"Column wise Sorted array";
	/* Method 2-2 Start*/

	int acolumns[100];	int tc=0;  int arcolumns[100][100];
	
	for(row=0; row<columns; row++)
	{
	
	for(column=0; column<rows; column++)
	{
		acolumns[column]= arrows[row][column];
	}
		
		Quicksort(acolumns, 0, rows-1);
				
							
		for (int ic = 0; ic < rows; ic++)
		{
        arcolumns[ic][row]=acolumns[ic];
		
			
		}
		
			
	}
	cout<<endl<<endl;
	
	for (i=0; i<rows; i++)
	{
		for(j=0;j<columns; j++)
		{
			cout<< arcolumns[i][j]<< " ";
		}
		cout<< endl;
	}
	
	outfile.open ("vk0018_2.txt");
	for (i = 0; i < rows; i++)
	{
		outfile << "\n";
		for (j = 0; j < columns; j++)
		{
        outfile << arcolumns[i][j]<< " ";
		}
	}
	int count2= ::count-count1;
	cout<< "count="<< count2;
	outfile <<endl<<"count=" <<count2; 
	outfile.close();
		
}
	






	