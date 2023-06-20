#include <iostream>

enum Color {
    RED,
    BLACK
};

struct Node {
    int key;
    Color color;
    Node* left;
    Node* right;
    Node* parent;

    explicit Node(int k) : key(k), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    Node* root;

    void leftRotate(Node* x) {
        Node* y = x->right;
        x->right = y->left;

        if (y->left != nullptr) {
            y->left->parent = x;
        }

        y->parent = x->parent;

        if (x->parent == nullptr) {
            root = y;
        } else if (x == x->parent->left) {
            x->parent->left = y;
        } else {
            x->parent->right = y;
        }

        y->left = x;
        x->parent = y;
    }

    void rightRotate(Node* y) {
        Node* x = y->left;
        y->left = x->right;

        if (x->right != nullptr) {
            x->right->parent = y;
        }

        x->parent = y->parent;

        if (y->parent == nullptr) {
            root = x;
        } else if (y == y->parent->left) {
            y->parent->left = x;
        } else {
            y->parent->right = x;
        }

        x->right = y;
        y->parent = x;
    }

public:
    RedBlackTree() : root(nullptr) {}

    void leftRotateRightRotate(int x) {
        Node* nodeX = ;
        if (nodeX == nullptr) {
            std::cout << "Node " << x << " not found in the tree." << std::endl;
            return;
        }

        Node* y = nodeX->right;
        rightRotate(y->left);
        leftRotate(nodeX);
    }

};

int main() {
    RedBlackTree rbTree;

    return 0;
}
