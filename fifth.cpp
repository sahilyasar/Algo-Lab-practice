#include <iostream>
using namespace std;
int main()
{
    int set[] = {5, 129, 6, 10, 45, 7, 9};
    int n = 7;
    bool check;
    check = false;
    int sum;
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (set[i] + set[j] == sum)
            {
                check = true;
                break;
            }
        }
    }
    if (check)
        cout << "True";
    else
        cout << "False";
}