#include <iostream>
#include <string>

using namespace std;

int position_of_value(string y, int i)
{

    char target = 'a';
    if (i == 0) target = 'a';
    else if (i == 1) target = 'e';
    else if (i == 2) target = 'i';
    else if (i == 3) target = 'o';
    else if (i == 4) target = 'u';

    for (int j = 0; j < y.size(); j++)
    {
        if (y[j] == target)
            return j;
    }
    return y.size();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string x = "aeiou";
        string y = "";


        if (n <= 5)
        {
            for (int i = 0; i < n; i++)
                cout << x[i];

            cout << endl;
            continue;
        }


        for (int i = 0; i < n; i++)
        {
            if (i < 5)
            {
                y.insert(i, 1, x[i]);
            }
            else
            {
                int p = i % 5;
                int position = position_of_value(y, p);
                y.insert(position, 1, x[p]);
            }
        }

        cout << y << endl;
    }

    return 0;
}
