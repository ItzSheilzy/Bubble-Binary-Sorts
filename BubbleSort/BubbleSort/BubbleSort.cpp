#include <iostream>
using namespace std;


void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


void print_array(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << ",\t";
        if (i % 10 == 9) std::cout << endl;
    }
    cout << endl;
    cout << endl;
}


void BubbleSort(int array[], int n)
{
    if (n < 2)
        return;
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] < array[i + 1])
            {
                swap(array[i], array[i + 1]);
                sorted = false;
            }
        }
    }
}


int main()
{
    const int array_size = 50;
    int array_to_be_sorted[array_size] = { 14,65,63,1,54,89,84,9,98,57,71,18,21,84,69,28,11,83,13,42,64,58,78,82,13,9,96,14,39,89,40,32,51,85,48,40,23,15,94,93,35,81,1,9,43,39,15,17,97,52 };
    cout << "Unsorted" << endl;
    print_array(array_to_be_sorted, array_size);


    BubbleSort(array_to_be_sorted, array_size);
    cout << "Bubble Sort" << endl;
    print_array(array_to_be_sorted, array_size);
}