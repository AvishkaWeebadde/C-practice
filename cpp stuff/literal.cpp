#include<iostream>
#include <string>
#include<string>

using namespace std;


int operator ""_bin(const char* str, size_t l) {

    int ret = 0;
    for(int i=0;i<l;i++){
        ret = ret << 1; // ret = ret * (2^1);
        // cout<< ret << endl;
        if(str[i] == '1')
        {
            ret += 1;
        }
    }

    return ret;
}

int main() {

    cout << "110"_bin << endl;

    /*
        ret = 0 * 2 = 0
        str[0] = 1
            ret = 1

        ret = 1 * 2 = 2
        str[1] = 1
            ret = 3

        ret = 3 * 2 = 6
        str[0] = 0

        --> return ret = 6 

    */

    return 0;
}

