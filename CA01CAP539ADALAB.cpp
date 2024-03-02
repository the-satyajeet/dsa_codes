
#include <bits/stdc++.h>
using namespace std;

int partition(int gems[], int l, int h)
{
    int i = l, j = h;
    int pivot = gems[l];
    do
    {
        do
        {
            i++;
        } while (gems[i] <= pivot);
        do
        {
            j--;
        } while (gems[j] > pivot);
        if (i < j)
            swap(gems[i], gems[j]);
    } while (i < j);
    swap(gems[l], gems[j]);
    return j;
}

void quickSort(int gems[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(gems, l, h);
        quickSort(gems, l, j);
        quickSort(gems, j + 1, h);
    }
}

int main()
{
    int n;
    // int gems[n] = {23, 12, 45, 28, 35, 32, 11, };
    cout << "Enter the number of gems present: ";
    cin >> n;
    int gems[n];
    cout << endl
         << "Enter the weights of each gems seperated by new line: ";
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        gems[i] = temp;
    }
    gems[n] = INT32_MAX;
    quickSort(gems, 0, n);
    cout << endl
         << "Sorted Gems: ";
    for (int i = 0; i < n; ++i)
    {
        cout << gems[i] << " ";
    }

    return 0;
}
