#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> my_array);
int main()
{
    vector<int> my_array;
    vector<int>::iterator p;

    int number_of_elements, element;
    cout << "Enter number of elements to insert in arrray :\n";
    cin >> number_of_elements;
    cout << "Enter elements :\n";

    for (int i = 0; i < number_of_elements; i++)
    {
        cin >> element;
        my_array.push_back(element);
    }
    cout << "\nEntered array is : \n";
    print(my_array);
    cout << "\nCapacity of array is : " << my_array.capacity();
    cout << endl;
    cout << "\nTotal number of elements in array  : \n"
         << my_array.size() << endl;
    cout << "\nInserting element at last, updated array is : \n";
    my_array.push_back(10);
    print(my_array);
    cout << "Inserting element after 4th position, updated array is :\n";
    p = my_array.begin();
    my_array.insert(p + 4, 222);
    print(my_array);
    cout << "Element at first position is : " << my_array.front() << endl;
    cout << "Element at last position is : " << my_array.back();

    return 0;
}

void print(vector<int> my_array)
{
    vector<int>::iterator p = my_array.begin();
    for (p; p != my_array.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;
}