#include <bits/stdc++.h>
using namespace std;

void merge_sort(int *arr, int start, int end)
{
    int mid = (start+end)/2;
    int len1 = mid-start+1;
    int len2 = end-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int main_arr_index = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[main_arr_index++];
    }

    main_arr_index = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[main_arr_index++];
    }
    // merging

    int index1 = 0;
    int index2 = 0;
    // main arr index
    main_arr_index = start;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[main_arr_index++] = first[index1++];
        }
        else
        {
            arr[main_arr_index++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[main_arr_index++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[main_arr_index++] = second[index2++];
    }
}

void merge(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end)/2;
    // sorting the left part
    merge(arr, start, mid);

    // sorting the right part
    merge(arr, mid+1, end);

    // merge
    merge_sort(arr, start, end);
}
int32_t main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;
    // Sort sort;
    merge(arr, 0, n - 1);
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i];
    }
    return 0;
}