#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;


namespace Sort
{
	typedef struct n1
	{
		int a;
	}n1;
	typedef struct n2
	{
		int a;
		double b;
		char c;
	}n2;
	typedef struct n3
	{
		char a;
	}n3;
	typedef struct n4
	{
		int a;
		double b;
	}n4;
	typedef struct n5
	{
		double a;
	}n5;
	
	char *arrStruct[] = { "n1", "n2", "n3", "n4", "n5" };



	void swap(int *a, int j)
	{
		int tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}
	void swap(double *a, int j)
	{
		double tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}
	void swap(short *a, int j)
	{
		short tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}


	void swap(int *a, int i, int j)
	{
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	void swap(short *a, int i, int j)
	{
		short tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	void swap(double *a, int i, int j)
	{
		double tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}


	void swap(char **a, int j)
	{
		char *tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}
	void swap(char **a, int i, int j)
	{
		char *tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}




	void printsort(int *a, int size)//double print
	{
		int i = 0;
		for (i = 0; i < size; i++)
		{
			cout << a[i] << "  ";
		}
		cout << endl;
	}
	void printsort(short *a, int size)//double print
	{
		int i = 0;
		for (i = 0; i < size; i++)
		{
			cout << a[i] << "  ";
		}
		cout << endl;
	}
	void printsort(double *a, int size)//double print
	{
		int i = 0;
		for (i = 0; i < size; i++)
		{
			cout << a[i] << "  ";
		}
	}
	void printsort(char **arrStruct, int size)
	{
		int i = 0;
		for (i = 0; i < size; i++)
		{
			cout << arrStruct[i] << "  ";
		}
	}



	void boublesort(short *a, int size)//function int 
	{
		int j = 0;
		int i = 0;
		for (i = size - 1; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				if (a[j] > a[j + 1])
				{
					swap(a, j);
					swap(arrStruct, j);
				}
			}
		}
	}



	int dealQuickSort(short *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		while (i < j)
		{
			if (arr[i] > arr[j])
			{
				swap(arr, i, j);
				swap(arrStruct, i, j);
				flag = !flag;
			}
			flag ? i++ : j--;
		}
		return flag ? j : i;
	}
	void mySort(short *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		int mid = 0;
		if (i < j)
		{
			mid = dealQuickSort(arr, i, j);
			mySort(arr, mid + 1, end);
			mySort(arr, start, mid - 1);
		}
	}
	void quicksort(short *a, int size)//function short
	{
		int start = 0;
		int end = size - 1;
		mySort(a, 0, size - 1);
	}


	void insertsort(short *a, int size)//function short 
	{
		int i = 0;
		int flag = 0;
		for (flag = 1; flag < size; flag++)
		{
			for (i = 0; i < flag; i++)
			{
				if (a[flag] < a[i])
				{
					char *tmpp = arrStruct[flag];
					int tmp = a[flag];
					int k = 0;
					for (k = flag; k > i; k--)
					{
						a[k] = a[k - 1];
					}
					for (k = flag; k > i; k--)
					{
						arrStruct[k] = arrStruct[k - 1];
					}
					a[i] = tmp;
					arrStruct[i] = tmpp;

				}
			}
		}

	}




	void boublesort(int *a,int size)//function int 
	{
		int j = 0;
		int i = 0;
		for (i = size - 1; i > 0; i--)
		{
			for (j = 0; j < i;j++)
			{
				if (a[j] > a[j+1])
				{
					swap(a, j);
				}
			}
		}
	}



	int dealQuickSort(int *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		while (i < j)
		{
			if (arr[i] > arr[j])
			{
				swap(arr, i, j);
				flag = !flag;
			}
			flag ? i++ : j--;
		}
		return flag ? j : i;
	}
	void mySort(int *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		int mid = 0;
		if (i < j)
		{
			mid = dealQuickSort(arr, i, j);
			mySort(arr, mid + 1, end);
			mySort(arr, start, mid - 1);
		}
	}
	void quicksort(int *a,int size)//function int 
	{
		int start = 0;
		int end = size - 1;
		mySort(a, 0, size - 1);
	}


	void insertsort(int *a,int size)//function int 
	{
		int i = 0;
		int flag = 0;
		for ( flag = 1; flag < size; flag++)
		{
			for (i = 0; i < flag;i++)
			{
				if (a[flag] < a[i])
				{
					int tmp = a[flag];
					int k = 0;
					for ( k = flag;  k > i; k--)
					{
						a[k] = a[k - 1];
					}
					a[i] = tmp;

				}
			}
		}
		
	}


	void boublesort(double *a, int size)//function double
	{
		int j = 0;
		int i = 0;
		for (i = size - 1; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				if (a[j] > a[j + 1])
				{
					swap(a, j);
				}
			}
		}
	}


	int dealQuickSort(double *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		while (i < j)
		{
			if (arr[i] > arr[j])
			{
				swap(arr, i, j);
				flag = !flag;
			}
			flag ? i++ : j--;
		}
		return flag ? j : i;
	}
	void mySort(double *arr, int start, int end)
	{
		int i = start;
		int j = end;
		int flag = 0;
		int mid = 0;
		if (i < j)
		{
			mid = dealQuickSort(arr, i, j);
			mySort(arr, mid + 1, end);
			mySort(arr, start, mid - 1);
		}
	}


	void quicksort(double *a, int size)//function double
	{
		int start = 0;
		int end = size - 1;
		mySort(a, 0, size - 1);
	}


	void insertsort(double *a, int size)//function double
	{
		int i = 0;
		int flag = 0;
		for (flag = 1; flag < size; flag++)
		{
			for (i = 0; i < flag; i++)
			{
				if (a[flag] < a[i])
				{
					double tmp = a[flag];
					int k = 0;
					for (k = flag; k > i; k--)
					{
						a[k] = a[k - 1];
					}
					a[i] = tmp;
				}
			}
		}
	}



	void sort(int *a,int size, int fun = 2)//do change//int
	{
		switch (fun)
		{
		case 1:
		{
			boublesort(a,size);
			printsort(a, size);

			break;
		}
		case 2:
		{
			quicksort(a,size);
			printsort(a, size);

			break;
		}
		case 3:
		{
			insertsort(a,size);
			printsort(a, size);

			break;
		}
		default:
			break;
		}
	}


	void sort(short * a, int size, int fun = 2)//do chang//double
	{
		switch (fun)
		{
		case 1:
		{
				  boublesort(a, size);
				  printsort(a, size);
				  printsort(arrStruct, size);
				  break;
		}
		case 2:
		{
				  quicksort(a, size);
				  printsort(a, size);
				  printsort(arrStruct, size);
				  break;
		}
		case 3:
		{
				  insertsort(a, size);
				  printsort(a, size);
				  printsort(arrStruct, size);
				  break;
		}
		default:
			break;
		}
	}


	void sort(double * a,int size, int fun = 2)//do chang//double
	{
		switch (fun)
		{
		case 1:
		{
			boublesort(a, size);
			printsort(a, size);
			break;
		}
		case 2:
		{
			quicksort(a, size);
			printsort(a, size);

			break;
		}
		case 3:
		{
			insertsort(a, size);
			printsort(a, size);

			break;
		}
		default:
			break;
		}
	}
}




int main()
{
	int change = 0;
	double arr[] = { 4.3, 2.5, 4.1, 6.7, 7.4, 3, 8, 9, 1, 12, 14 ,6};
	
	short arrSize[] = { sizeof(Sort::n1), sizeof(Sort::n2), sizeof(Sort::n3), sizeof(Sort::n4), sizeof(Sort::n5) };

	int size = sizeof(arrSize) / sizeof(arrSize[0]);
	cout << "         Do you change the sort function ?" << endl;
	cout << endl;
	cout << " ********   1.boublesort    2.quicksort    ********" << endl;
	cout << " ********   3.insertsort    4.Don't change ********" << endl;
	cin >> change;
	if (change < 4 && change > 0)
	{
		Sort::sort(arrSize, size, change);
	}
	else
	{
		Sort::sort(arrSize, size);
	}
	system("pause");
	return 0;

}