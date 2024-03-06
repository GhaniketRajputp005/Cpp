#include <iostream>
using namespace std;
void find_prime(int arr[], int size, int n)
{
    int num = 4, flag = 0;

    while (size <= n)
    {
        flag = 0;
        if ((num - 1) % 6 == 0 || (num + 1) % 6 == 0)
        {

            for (int i = 0; i < size; i++)
            {
                if (num % arr[i] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                arr[size++] = num;
            }
            num++;
        }
        else
        {
            num++;
            continue;
        }
        
    }
}
int main()
{
    int n;
    cout << "how many prime numbers to find\n";
    cin >> n;
    int arr[n];
    arr[0] = 2;
    arr[1] = 3;
    int size = 2;
    find_prime(arr, size, n);
    for (int i = 0; i < 100; i++)
        cout << arr[i] << " ";
    return 0;
}