#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 and n==1){
            return 1;
        }
        else if(trust.size()==0 and n!=1){
            return -1;
        }
        int array[n+1];
        int array1[n+1];
        for(int i=0; i<n+1; i++){
            array1[i]=0;
            array[i]=0;
        }
        for(int i=0; i<trust.size(); i++){
            array[trust[i][0]] = trust[i][1];
            array1[trust[i][1]]++;
        }
        for(int i=0; i<n+1; i++){
            if(array1[i]==n-1 and array[i]==0){
            return i;
            }
        }
        return -1;
    }
};
int main(){
    int n = 0;
    cout << "Input amount of people" << endl;
    cin >> n;
    cout << "findJudge" << endl;
    return 0;
}
