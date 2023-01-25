#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 100000 //Брой на елементите
//int a[N]={8, 2, 5, 9, 3};
int a[N];
int temp[N];
using namespace std;

//quick sort function
void quicksort (int lo, int hi)
{
    int i = lo, j = hi, h;
    int x = a[(lo+hi)/2];
    do
    {    
        while (a[i]<x) i++; 
        while (a[j]>x) j--;
        if (i<=j)
        {
            h = a[i]; 
			a[i] = a[j]; 
			a[j] = h;
            i++; j--;
        }
    }while (i<=j);
    if (lo<j) 
		quicksort(lo, j);
    if (i<hi) 
		quicksort(i, hi);
}

//heap sort functions:
void siftDown(int root, int bottom)
{
	//cout<<"shift down"<<endl;
	int maxChild, temp;
	while (root*2 <= bottom)
	{
		if (root*2 == bottom)
			maxChild = root * 2;
		else if (a[root * 2] > a[root * 2 + 1])
			maxChild = root * 2;
		else
			maxChild = root * 2 + 1;
		if (a[root] < a[maxChild])
		{
			temp = a[root];
			a[root] = a[maxChild];
			a[maxChild] = temp;
			root = maxChild;
		}
		else
			break;
	}
}

void heapSort(int array_size)
{
	//cout<<"heap sort"<<endl;
	int i, temp;
	for (i = (array_size/2)-1; i >= 0; i--){
		//cout<<"build heap"<<endl;
		siftDown(i, array_size);
	}
		
	for (i = array_size-1; i >= 1; i--)
	{
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		//cout<<"rebuild heap!!!"<<endl;
		if(i!=1){
			siftDown(0, i-1);
		}
		//siftDown(0, i-1);
	}
}


//merge sort functions:
void merge(int left, int mid, int right)
{
	int i, left_end, num_elements, tmp_pos;
	left_end = mid - 1;
	tmp_pos = left;
	num_elements = right - left + 1;
cout<<endl<<"n: "<<num_elements<<endl;
	while ((left <= left_end) && (mid <= right))
	{
		if (a[left] <= a[mid])
		{
			temp[tmp_pos] = a[left];
			tmp_pos = tmp_pos + 1;
			left = left +1;
		}
		else
		{
			temp[tmp_pos] = a[mid];
			tmp_pos = tmp_pos + 1;
			mid = mid + 1;
		}
	}
	while (left <= left_end)
	{
		temp[tmp_pos] = a[left];
		left = left + 1;
		tmp_pos = tmp_pos + 1;
	}
	while (mid <= right)
	{
		temp[tmp_pos] = a[mid];
		mid = mid + 1;
		tmp_pos = tmp_pos + 1;
	}
	for (i=0; i <= num_elements; i++)
	{
		a[right] = temp[right];
		right = right - 1;
	}

for(int i=0; i<num_elements; i++){
	cout<<temp[i]<<" ";
}
}

void mergeSort(int left, int right)
{
	int mid;
	if (right > left)
	{
		mid = (right + left) / 2;
		mergeSort(left, mid);
		mergeSort(mid+1, right);
		merge(left, mid+1, right);
	}
}

int main()
{
	int i, j, temp, index, min, imin, h, increment;

	cout << "Enter the elements of one-dimensional array\n";
//	for(i=0; i<N; i++)
//	{	
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
 
//	for(i=0; i<N; i++)
//		a[i] = rand() % 10000;

	j=N;
	for(int i=0; i<N; i++){
		a[i]=j;
		j--;
	}

	
//	for(int i=0; i<N; i++)
//		cout<<a[i]<<", ";
	
	cout << "Sorting ..." << "\n";

	clock_t cl;    
	cl = clock(); 
	
	//Bubble sort:
//	for(i=N-1; i>=0; i--)
//	{
//		for(j=1; j<=i; j++)
//		{
//			if(a[j-1] > a[j])
//			{
//				temp = a[j-1];
//				a[j-1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
	
	//Insertion sort
//	for(i=1; i<N; i++)
//	{
//		index = a[i];
//		j = i;
//		while((j>0) && (a[j-1]>index))
//		{
//			a[j] = a[j-1];
//			j = j - 1;
//		}
//		a[j] = index;
//	}

	//Selection sort
//	for(i=0; i<N-1; i++)
//	{
//		min = a[i];
//		imin = i;
//		for(j=i+1; j<N; j++)
//		{  
//			if(min>a[j])
//			{  
//				min = a[j];
//				imin = j;
//			}
//		}
//		a[imin] = a[i];
//		a[i] = min;
//	}
	
	//Quick sort
//	quicksort(0, N-1);

	//Shell sort
//	increment = N/2;
//	while (increment > 0)
//	{
//		for (i=0; i<N; i++)
//		{
//			j = i;
//			temp = a[i];
//			while ((j >= increment) && (a[j-increment] > temp))
//			{
//				a[j] = a[j - increment];
//				j = j - increment;
//			}
//			a[j] = temp;
//		}
//		if (increment/2 != 0)
//			increment = increment/2;
//		else if (increment == 1)
//			increment = 0;
//		else
//			increment = 1;
//	}

//	for (int gap = N/2; gap > 0; gap /= 2){
//	    for (int i = gap; i < N; i += 1)
//	    {
//	        int temp = a[i];
//	        int j;           
//	        for (j = i; j >= gap && a[j - gap] > temp; j -= gap){
//	          	a[j] = a[j - gap];
//			}
//	        a[j] = temp;
//	    }
//	}

	//Heap sort
	heapSort(N);

	//Merge sort
//	mergeSort(0, N-1);	

	cl = clock() - cl;  
	cout << "Time: " << cl/(double)CLOCKS_PER_SEC << " sec.\n";  
	
//	cout << "\nThe sorted elements of one-dimensional array\n";
//	for(i=0; i<N; i++)
//		cout << "a[" << i << "] = " << a[i] << "\n";
	
	return 0;
}


