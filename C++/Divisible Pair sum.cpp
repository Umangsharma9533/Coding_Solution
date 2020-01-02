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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
   
    int max=0;
    for(int i=0;i<n;i++)
        {
        
    int z=0;
        for(int j=i+1;j<=n;j++)
    {
            z=i&j;
            if(z<k && max<=z)
                {
                max=z;
            }
        }
    
    }
        cout<<max<<endl;
    }#include <map>
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
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int c=0,count=0;
    for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            int c=a[i]+a[j];
            if(c%k==0)
                {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

    return 0;
}
