#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    e. posortowane malejaco
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
        sort(foo.rbegin(), foo.rend());
        for (auto it = foo.begin(); it != foo.end(); ++it)
        {
            cout << *it << endl;
        }
        
    }
    
    
    
    return 0;
}

