#include <iostream>
#include <vector>
# define sized 10

using namespace std;

vector<int> find_triplet(vector<int> arr) {
    int n = arr.size();
    int i = 0, j = 1, k = 2;
    while (k < n) {
        if (arr[i] + arr[j] == arr[k]) {
            return {i, j, k};
        } else if (arr[i] + arr[j] < arr[k]) {
            j++;
        } else if (arr[i] + arr[j] > arr[k]) {
            i++;
            if (i == j) {
                j++;
            }
        }
        k++;
    }
    return {-1};
}

int main() {
    vector<int> v(sized);
    for(int i=0;i<sized;i++)
    {
        int val;
        cin>>val;
        v[i]=val;
    }
    vector<int> triplet = find_triplet(v);
    if (triplet[0] == -1) {
        cout << "Not Found" << endl;
    } else {
        cout << "Indices: (" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")" << endl;
    }
    return 0;
}
