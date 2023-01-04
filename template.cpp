#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *arr;
    int size;
    int length;

public:
    Array()
    {
        size = 0;
        arr = new int[10];
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        arr = new int[size];
    }
    ~Array()
    {
        delete[] arr;
    }
    void Display();
    void Append(T x);
    void Insert(int index, T x);
    T Delete(int index);
    int LinearSearch(T x);
    T BinarySearch();
    T Get(int index);
    void Set(int index, T x);
    T Max();
    T Min();
    void Reverse();
    void Reverse2();
    Array *Merge(Array arr2);
    Array *Union(Array arr2);
    Array *Diff(Array arr2);
    Array *Inter(Array arr2);
};

template <class T>
void Array<T>::Display()
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

template <class T>
void Array<T>::Insert(int index, T x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= index; i--)
            arr[i + 1] = arr[i];
        arr[index] = x;
        length++;
    }
}
template <class T>
void Array<T>::Append(T x)
{
    if (length < size)
    {
        arr[length++] = x;
    }
}

template <class T>
T Array<T>::Delete(int index)
{
    T x = 0;
    if (index >= 0 && index <= length)
    {
        x = arr[index];
        for (int i = index; i < length - 1; i++)
            arr[i] = arr[i + 1];
        length--;
    }
    return x;
}

template <class T>
int Array<T>::LinearSearch(T x)
{
    int i;
    for (int i = 0; i < length; i++)
    {
        if (x == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    Array<int> arr(10);
    arr.Insert(0, 2);
    arr.Insert(1, 4);
    arr.Insert(2, 9);
    arr.Insert(1, 7);
    arr.Insert(3, 5);
    arr.Append(9);
    cout << arr.LinearSearch(7);
    return 0;
}