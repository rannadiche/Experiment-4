#include <iostream>
 
using namespace std;
  
void BubbleSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	
 
int main()
{
	int n, i, arr[n];
	cout << "Enter the array size: ";
	cin >> n;
 	
 	cout << "Enter the " << n << " elements: ";
 	
	for(i = 0; i < n; i++)
		cin >> arr[i];
 
 	cout << endl << "Your data: ";
 	for (i = 0; i < n; i++) 
        cout << arr[i] << " ";
 
	BubbleSort(arr, n);
 
 	cout << endl << "\nAfter using selection or bubble sort... " << endl;
 	
	cout << "\nSorted Data: ";
	for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
	return 0;
}
