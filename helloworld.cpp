#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"c++", "is", "fun!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
