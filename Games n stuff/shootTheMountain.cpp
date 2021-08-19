#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{

    // game loop
    //while (1) {
        vector< pair <int,int> > vect;
        int mountain;
        for (int i = 0; i < 8; i++) {
            cin >> mountain;
            vect.push_back(make_pair(mountain, i));   
        }

        sort(vect.begin(), vect.end());

        cout << vect[7].second << endl;
        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        //cout << "4" << endl; // The index of the mountain to fire on.
    //}
}