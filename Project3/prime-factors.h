#pragma once
#include <vector>

using namespace std;

class PrimeFactor
{
public:
    vector<int> of(int num)
    {
        vector<int> result = {};
        if (num == 2)
        {
            result.push_back(2);
        }
        else if (num == 3)
        {
            result.push_back(3);
        }
        return result;
    }
};