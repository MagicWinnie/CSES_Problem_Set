#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<bool> arr(n + 1);
    arr[0] = true;
    
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        arr[temp] = true;
    }

    for (size_t i = 1; i < arr.size(); i++)
    {
        if (!arr[i])
        {
            cout << i << endl;
            return 0;
        }   
    }
}