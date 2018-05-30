// Given a string, find the length of the longest substring without repeating characters.

#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
        int arr[255];
        for (int i = 0; i < 255; i++){
           arr[i] = 0;
        }
        int longgestSub = 0;
        int currentSub = 0;
        for (int len = 0; len < s.length(); len++){
            cout << "len = " << len << endl;
            if (currentSub < arr[s.at(len)]){
               currentSub = arr[s.at(len)];
               cout << "currentSub = " << currentSub << endl;
            }
            if (longgestSub < len - currentSub + 1){
                longgestSub = len - currentSub + 1;
                cout << "longgestSub = " << longgestSub << endl;
            }
            arr[s.at(len)] = len + 1;
        }
    return longgestSub;
}
