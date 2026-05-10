#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int shortestPath(int n) {
    // menyimpan jarak minimum ke tiap vertex
    vector<int> dist(n + 1, -1);

    queue<int> q;

    // mulai dari vertex 1
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // kemungkinan tujuan berikutnya
        int next1 = current + 1;
        int next2 = current * 3;

        // edge ke current + 1
        if (next1 <= n && dist[next1] == -1) {
            dist[next1] = dist[current] + 1;
            q.push(next1);
        }

        // edge ke current * 3
        if (next2 <= n && dist[next2] == -1) {
            dist[next2] = dist[current] + 1;
            q.push(next2);
        }
    }

    return dist[n];
}

int main() {
    int n;

    cout << "Input n: ";
    cin >> n;

    cout << "Minimum edges: " << shortestPath(n) << endl;

    return 0;
}