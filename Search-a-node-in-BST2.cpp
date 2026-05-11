#include <iostream>
#include <limits>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    bool search(Node* root, int key) {
        Node* current = root;

        while (current != NULL) {
            if (current->data == key) {
                return true;
            }

            if (key < current->data) {
                current = current->left;
            } 
            else {
                current = current->right;
            }
        }
        return false;
    }
    
    void clear(Node* root) {
        if (root == NULL) return;
        clear(root->left);
        clear(root->right);
        delete root;
    }
};

int main() {
    Node* root = new Node(6);
    root->left = new Node(2);
    root->right = new Node(8);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    Solution sol;
    
   int userKey;

    cout << "=== Program Pencarian BST ===" << endl;
    cout << "Masukkan angka yang ingin dicari: ";
    
    while (true) {
        cout << "Masukkan angka yang ingin dicari: ";
        if (cin >> userKey) {
            // Input valid, keluar dari loop
            break;
        } else {
            // Input bukan angka
            cout << "Error: Mohon masukkan angka yang valid!" << endl;
            cin.clear(); // Membersihkan status error cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membuang input salah di buffer
        }
    }

    if (sol.search(root, userKey)) {
        cout << "Hasil: Angka " << userKey << " DITEMUKAN di dalam Binary Tree." << endl;
    } else {
        cout << "Hasil: Angka " << userKey << " TIDAK DITEMUKAN." << endl;
    }

    return 0;
}