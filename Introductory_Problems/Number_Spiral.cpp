#include <iostream>

using namespace std;

int main()
{
    int t;
    long long x, y;
    cin >> t;

    for (int t_i = 0; t_i < t; t_i++)
    {
        long long res_y = 0, res_x = 0;
        cin >> y >> x;
        res_y = (y % 2 == 0) ? y * y : (y - 1) * (y - 1) + 1;
        res_x = (x % 2 == 0) ? (x - 1) * (x - 1) + 1 : x * x;
        if (res_x > res_y)
        {
            if (x % 2 == 0)
                res_x += y - 1;
            else
                res_x -= y - 1;
            cout << res_x << '\n';
        }
        else 
        {
            if (y % 2 == 0)
                res_y -= x - 1;
            else 
                res_y += x - 1;
            cout << res_y << '\n';
        }
    }
}