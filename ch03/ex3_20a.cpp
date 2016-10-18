#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::cin;

int main()
{
    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i));

    if (ivec.empty())
    {
        cout << "input at least one integer." << endl;
        return -1;
    }

    if (ivec.size() == 1)
    {
        cout << "only one integer " << ivec[0] << ",it doesn't have any adjacent elements." << endl;
        return -1;
    }

    for (int i = 1; i != ivec.size(); ++i)
        cout << ivec[i-1] + ivec[i] << " ";
    cout << endl;
    
    return 0;
}
