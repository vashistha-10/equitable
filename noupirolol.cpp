#include <bits/stdc++.h>
using namespace std;

int frequency(int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            count++;
    return count;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        brr[i] = frequency(arr, n, arr[i]);
    }
    sort(brr, brr + n);
    int newnum = brr[n - 1];
    cout << newnum << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
            cout << arr[i] << " ";
    }
    cout << arr[n - 1];
}
