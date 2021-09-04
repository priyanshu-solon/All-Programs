#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 9

/* swap a[i] and a[j] */
void swap(int a[], int i, int j)
{	
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void print(const int arr[])
{
	for(int i=0;i < SIZE; i++) {
		cout << setw(3) << arr[i];
	}
	cout << endl;
}

/* sort arr[left]...arr[right] into increasing order */
void qsort(int a[], int left_index, int right_index)
{
	int left, right, pivot;
	if(left_index >= right_index) return;

	left = left_index;
	right = right_index;

        // pivot selection
	pivot = a[(left_index + right_index) /2];

        // partition
	while(left <= right) {
		while(a[left] < pivot) left++;
		while(a[right] > pivot) right--;
		if(left <= right) {
			swap(a,left,right);
			left++; right--;
		}
		print(a);		
	}
    
        // recursion
	qsort(a,left_index,right);
	qsort(a,left,right_index);
}

int main()
{
	int a[SIZE]={11, 9,8,4,7,0,5};
	print(a);
	qsort(a,0,SIZE-1);
}