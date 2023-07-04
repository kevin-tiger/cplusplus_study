#include <iostream>
using namespace std;

void bubbleSort(int a[], int len);

int main(int argc, char** argv)
{
    const int len = 5;
    int a[len] = {1, 3, 2, 4, 5};
    cout << "input:" << endl;
    for(int i=0; i<len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    bubbleSort(a, len);
    return 0;
}


void bubbleSort(int a[], int len)
{
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout << "output:" << endl;
    for(int i=0; i<len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}