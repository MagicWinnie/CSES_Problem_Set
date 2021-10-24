#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    vector<bool> arr(n, false);
    int count = 1, curr = 0;
    while (true)
    {
        cout << curr + 1 << ' ';
        arr[curr] = true;
        curr = (curr + 2) % n;
        if (count == n)
            break;
        while (arr[curr])
            curr = (curr + 1) % n;
        count++;
    }
    cout << endl;
}