#include <iostream>

using namespace std;

int main()
{
    int n;
    long long count = 0, temp, last;
    cin >> n;
    
    cin >> last;
    while (cin >> temp)
    {
        if (temp < last)
            count += last - temp;
        else 
            last = temp;
    }
    cout << count << endl;
}