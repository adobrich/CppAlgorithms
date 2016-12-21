#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> data {1, 5, 2, 3, 7, 9, 3 ,4};

    auto vbeg = data.begin();
    auto vend = data.end();

    for (auto i = vbeg + 1; i != vend; i++)
    {
        auto key = *i;
        auto j = i;

        while (j != vbeg && key < *(j - 1))
        {
            *j = *(j - 1);
            j--;
        }
        *j = key;


    }
    for (auto element : data)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
