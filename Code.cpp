#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int cupboards;
    cin >> cupboards;
    int size = 2*cupboards;
    int* doors = new int[size];
    int left1 = 0, right1 = 0;
    int left0 = 0, right0 = 0;
    int sum = 0;
 
    for(int i = 0; i < size; i++) {
        cin >> doors[i];
    }
    for(int i = 0; i < size; i+=2) {
        if(doors[i]) {
            left1++;
        }
    }
    for(int i = 1; i < size; i+=2) {
        if(doors[i]) {
            right1++;
        }
    }
    left0 = size / 2 - left1;
    right0 = size / 2 - right1;

    if(left1 < left0)   sum += left1;
    else    sum += left0;

    if(right1 < right0)   sum += right1;
    else    sum += right0;

    cout << sum;
    delete[] doors;
    return 0;
}
