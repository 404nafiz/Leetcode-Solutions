#include <iostream>
using namespace std;

int main()
{


class Solution {
public:
    int singleNumber(vector<int>& num) {
     int ans=0;
     for(int i:num)
     {
         ans=ans^i;

     }
     return ans;
        
    }
}
}

