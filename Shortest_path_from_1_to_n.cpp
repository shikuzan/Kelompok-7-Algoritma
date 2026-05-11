#include <iostream>
using namespace std;

int minimumStep(int n) {
        // complete the function here
         int count = 0;
        while(n > 1){
            if(n % 3 == 0) n /= 3;
            else n--;
            count++;
        }
        return count;
    }
int main(){
    int n;
    cout << "Input N: ";
    cin >> n;
    cout << "Shortest path = " << minimumStep(n);
    return 0;
}
