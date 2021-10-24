#include <iostream>

using namespace std;

int main()
{
    char temp, last;
    int curr_size = 0, max_size = 0;
    while (cin >> temp)
    {
        if (temp != last)
        {
            if (curr_size > max_size)
                max_size = curr_size;
            curr_size = 1;
        }
        else 
            curr_size++;
        last = temp;
    }
    if (curr_size > max_size)
        max_size = curr_size;
    cout << max_size << endl;
}