#include <iostream>
using namespace std;

int arr[15];
int n; // input jumlah data

void inputData(){

    while (true)
    {
        cout << "Masukkan Jumlah Data: ";
        cin >> n;

        if (n < 15){
            break;
        }
        else{
            cout << "Jumlah data maksimal 15 " << endl;
        }
    }

    cout << "=======================" << endl;
    cout << "Masukkan Data" << endl;
    cout << "=======================" << endl;
    cout << endl;

    for (int i = 0; i < n; i ++)
    {
        cout <<  "Masukkan data ke- " << i + 1 << " = ";
        cin >> arr[i];
    }
}


// Algorithm for bubble sort:
//1. Set pass = 1
//2. Repeat step 3 varying j from 0 to n - 1 - pass
//3. If the element at index j is greater than the element at index j + 1, swap the two elements
//4. Increment pass by 1
//5. If pass <= n - 1, go to step 2

void bubbleSort()
{

    int pass = 1; // step 1
    do
    {

        for (int j = 0; j <= n - 1 - pass; j++) // step 2
        {
            if (arr[j] > arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

    pass = pass + 1; // step 4
    }
    while (pass <= n - 1); //step 5
    {
        /* code */
    }

}

void displayData()
{
    cout << endl;
    cout << "=======================" << endl;
    cout << "Data setelah diurutkan" << endl;
    cout << "=======================" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " = " << arr[i] <<endl;
    }

}

int main()
{
    inputData();
    bubbleSort();
    displayData();
    return 0;
}