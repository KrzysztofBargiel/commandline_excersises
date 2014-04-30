#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    b. w tej samej kolejnosci
    vector<int> vec;
    
    
    
    if (argc >1)
    {
        ifstream input;
        input.open(argv[1]);
        while (input.good())
        {
            int num;
            input >> num;
            vec.push_back(num);
        }
        for (auto foo = vec.begin(); foo !=vec.end(); ++foo)
        {
            cout << *foo << endl;
        }

    }
    return 0;
}

