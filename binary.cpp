#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num = 30;
    int j = 0;
    int k = 2;
    vector<int> numsArr = {};

    for(int i = 0; i < num; i++)
    {
        if (i == j)
        {
            numsArr.push_back(0);
            j = j + k;
            k++;
        } else
        {
            numsArr.push_back(1);
        }
    }
    for (int x = 0; x < 30; x++)
    {
        cout << numsArr.at(x) << endl;
    }

    return 0;
}