#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char * argv[])
{
    // a. wypisze wszystkie otrzymane argumenty w ososbnych liniach
    vector<int> vec;
    
    
    if (argc > 1)
    {
        ifstream input;
        input.open(argv[1]);
        while (input.good())
        {
            int num;
            input >> num;
            vec.push_back(num);
        }
        input.close();
    }
    
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << endl;
    }
    
    
    return 0;
}

