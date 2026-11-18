#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5,2,8,1,9};

    sort(v.begin(), v.end());

    cout << "Sorted: ";
    for(int x : v)
        cout << x << " ";

    cout << endl;

    auto it = find(v.begin(), v.end(), 8);

    if(it != v.end())
        cout << "Found 8\n";
    else
        cout << "Not Found\n";
}
