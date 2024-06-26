#include <iostream>
using namespace std;

// Definisi struktur node untuk binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

// Fungsi untuk melakukan preorder traversal
void preorderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }
    // Cetak data dari node saat ini
    cout << node->data << " ";
    // Traversal subtree kiri
    preorderTraversal(node->left);
    // Traversal subtree kanan
    preorderTraversal(node->right);
}

// Fungsi untuk melakukan inorder traversal
void inorderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }
    // Traversal subtree kiri
    inorderTraversal(node->left);
    // Cetak data dari node saat ini
    cout << node->data << " ";
    // Traversal subtree kanan
    inorderTraversal(node->right);
}

// Fungsi untuk melakukan postorder traversal
void postorderTraversal(Node* node) {
    if (node == NULL) {
        return;
    }
    // Traversal subtree kiri
    postorderTraversal(node->left);
    // Traversal subtree kanan
    postorderTraversal(node->right);
    // Cetak data dari node saat ini
    cout << node->data << " ";
}

// Fungsi untuk menambah node baru ke binary tree
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

int main() {
    Node* root = NULL;

    // Membuat binary tree
    root = insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 12);
    insertNode(root, 18);

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}


