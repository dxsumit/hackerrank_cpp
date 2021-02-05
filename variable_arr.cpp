//  variable size array......    

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, len, val;
    cin >> n >> q;
    
    vector<vector<int>> arr;        // creating array of arrays..
    for(int i=0; i<n; i++) {
        cin >> len;
        vector<int> index_arr;
        for(int j=0; j<len; j++) {
            cin >> val;
            index_arr.push_back(val);
        }
        arr.push_back(index_arr);
    }

    int arr_no, index;
    for(int i=0; i<q; i++) {
        cin >> arr_no >> index;
        cout << arr[arr_no][index] << endl;
    }

    return 0;
}
