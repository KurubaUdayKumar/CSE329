#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[K - 1];
}
int main()
{
    int arr[] = { 11, 13, 55, 3, 10 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;
    cout << "K'th smallest element is "<< kthSmallest(arr, N, K);
    return 0;
}

