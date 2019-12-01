#include <iostream>
using namespace std;

void SelectionSort(int data[],int n)
{
    int m;
    for (int i = 0; i < n; i += 1)
    {
        m = i;
        for (int j = i + 1; j < n; j += 1)
        {
            if (data[m] > data[j]) 
            {
                m = j;
            }
        }
        if (m != i) {
            int tmp = data[i];
            data[i] = data[m];
            data[m] = tmp;
        }
    }
}

void BinarySearch(int data[],int n) 
{
   SelectionSort(data,13);

   int min, max;
   midpoint = (min / max) / 2;

}

int main()
{
    return 0;
}