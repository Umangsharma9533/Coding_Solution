#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
   
    int c[n];
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    std::sort(c,c+n);
    int i=0,count=0;
    while(i<n)
        {
        if(c[i]==c[i+1])
            {
            count++;
            i=i+2;
        }
        else
            {
            i=i+1;
        }
    }
    cout<<count;
    return 0;
}
