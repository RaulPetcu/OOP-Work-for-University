#include <iostream>
using namespace std;
template <class T>
class Vector 
{
    int size;
    T* vector = new T[100];

public:
    static bool compare(T x, T y)
    {
        if (x > y)
            return true;
        return false;
    }

    void push(T value) {
        vector[++size] = value;
    }
    
    T pop() {
        return vector[size];
    }

    void removeFromIndex(int index) {
        for (int i = index; i < size; i++)
            vector[i] = vector[i + 1];
        size--;
    }
    
    void insertAtIndex(int index, T val) {
        vector[size + 1] = vector[size]; // dublez ultima valoare
        for (int i = size; i > index; i--) {
            vector[i] = vector[i - 1]; 
        }
        vector[index] = val;
        size++;
    }

    void sort(bool (*ptr)(T, T)) 
    {
        for (int i = 1; i < size; i++)
            for (int j = i + 1; j <= size; j++)
                if ((*ptr)(vector[i], vector[j]) == true)
                    swap(vector[i], vector[j]);
    }

    void sort(const char* op)
    {
        if (strcmp(op, "<") != 0) // nu avem < ca parametru
            cout << "Invalida operator! \n";
        else
            for (int i = 1; i < size; i++)
                for (int j = i + 1; j <= size; j++)
                    if (vector[i] > vector[j])
                        swap(vector[i], vector[j]);
    }

    int findIndexOf(T tmp) 
    {
        for (int i = 0; i < size; i++)
            if (vector[i] == tmp)
                return i;
        return -1;
    }

    const T& get(int index) {
        return &vector[index];
    }

    void set(T tmp, int index) {
        vector[index] = tmp;
    }

    
    int count() {
        return size;
    }
    void getElements(){
        for (int i = 1; i <= size; i++) {
            cout << vector[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Vector<int> v;

    v.push(11);
    v.push(13);
    v.push(5);
    v.push(132);
    v.push(113);
    v.push(999);
    v.push(9);
    v.push(75);
    v.push(234);

    

    cout << v.count() << endl;
    v.getElements();
    v.removeFromIndex(4);
    v.getElements();

    v.insertAtIndex(5, 69);
    v.getElements();

    cout << v.get(3) << endl;

    v.set(131313, 2);
    v.getElements();

    //v.sort("<");        
    v.sort(&v.compare);    
    v.getElements();

    return 0;
}
