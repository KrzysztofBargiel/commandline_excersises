#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    vector<int> foo;
    if (argc > 1)
    {
        ifstream input;
        input.open(argv[1]);
        while (input.good())
        {
            int num;
            input >> num;
            foo.push_back(num);
        }
        for (auto it = foo.rbegin(); it != foo.rend(); ++it)
        {
            cout << *it << endl;
        }
        
    }
    return 0;
}

