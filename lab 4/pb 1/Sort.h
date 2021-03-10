#pragma once
class Sort
{    
    int capacity;
    //int arr[100];
    int* arr;
public:

    // add constuctors
    Sort(int number, int mini, int maxi);

    Sort();

    Sort(int sz, int v[100]);

    Sort(int count, ...);
    
    Sort(const char* s);      
 

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};