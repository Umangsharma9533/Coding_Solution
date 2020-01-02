#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,totalCost = 0,charged,a;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(i!=k)totalCost+=a;
    }
    cin >> charged;
    ((charged -= (totalCost/2)) != 0) ? cout << charged << endl : cout << "Bon Appetit" << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
