#include <iostream>
using namespace std;

const int rowsize = 100;

// function to count identical rows (row-wise groups)
int fun(int arr[][3], int rows)
{
    bool visited[rows] = {false};   // remining inddex will get false to
    int count = 0;

    for(int i = 0; i < rows; i++)
    {
        if(visited[i]) continue;

        int sameCount = 1;

        for(int j = i + 1; j < rows; j++)
        {
            if(arr[i][0] == arr[j][0] &&
               arr[i][1] == arr[j][1] &&
               arr[i][2] == arr[j][2])
            {
                sameCount++;
                visited[j] = true;
            }
        }

        if(sameCount > 1)
        {
            count += sameCount;
        }
    }

    return count;
}

int main()
{
    int arr[rowsize][3];
    int rows;

    cout << "Enter no of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int identical_rows = fun(arr, rows);

    cout << "No of identical rows: " << identical_rows;

    return 0;
}