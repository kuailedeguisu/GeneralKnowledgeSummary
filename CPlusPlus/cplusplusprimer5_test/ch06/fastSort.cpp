#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int point = arr[low];

    while (low < high)
    {
        while (low < high && arr[high] > point)
            high--;
        arr[low] = arr[high];

        while (low < high && arr[low] < point)
            low++;
        arr[high] = arr[low];

    }

    arr[low] = point;
    return low;
}

int findMid( int arr[], int len)
{
    int index = len / 2;
    int left = 0;
    int right = len - 1;
    int findedPoint = -1;

    while (index != findedPoint)
    {
        findedPoint = partition(arr, left, right);
        if (findedPoint < index)
        {
            left = findedPoint + 1;
        }
        else if (findedPoint > index)
        {
            right = findedPoint - 1;
        }

    }

    return arr[index];
}

int main()
{
    int arr[] = {1, 20, 2, 4, 90,49,90};

    cout << findMid(arr,sizeof(arr)/sizeof(arr[0])) << endl;

    return 0;
}