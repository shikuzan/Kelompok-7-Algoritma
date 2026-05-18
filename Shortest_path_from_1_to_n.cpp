#include <iostream>
using namespace std;

int minimumStep(int n) {
        int count = 0; //Jumlah langkah/jarak ke n
        while(n >= 1){
            if(n % 3 == 0) n /= 3;
            else n--;
            count++;
        }
        return count;
    }
int main(){
    int n; //Jumlah node
    cout << "Input N: ";
    cin >> n;
    cout << "Shortest path = " << minimumStep(n);
    return 0;
}
