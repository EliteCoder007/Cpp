#include<bits/stdc++.h>
using namespace std;

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl; 
}

int main(){
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Before Bubble Sorting: ";
    printArray(array, size);

    //Bubble Sort Implementatin-->
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            //For Ascending:
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            //For Descending conditon--> array[j] < array[j + 1]...
            
        }
        
    }

    cout << "After Bubble Sorting: ";
    printArray(array, size);    
    
    return 0;
}