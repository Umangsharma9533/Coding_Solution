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
    int maxSum=-36985237;
    vector< vector<int> > ar(6,vector<int>(6));
    for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> ar[i][j];
       }
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(j+2 < 6 && i+2 < 6 ){
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > maxSum)maxSum = sum;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
