#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int start, end;
    cout << "Starting range: ";
    cin >> start;
    cout << "Ending range: ";
    cin >> end;

    cout << "The prime numbers between " << start << " and " << end << " are: " << endl;
    int count = 0;

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "The total number of prime numbers between "
         << start << " and " << end << " is: " << count << endl;

    return 0;
}
