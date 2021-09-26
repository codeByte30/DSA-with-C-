#include<bits/stdc++.h>
using namespace std;
//defining a node
class node {
public:
    int data;
    node*left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node*createTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }
    node*root = new node(d);
    root->left = createTree();
    root->right = createTree();
    return root;
}
void inorder(node*root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node*root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postOrder(node*root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void levelorder(node*root) {
    queue<node*>q;
    q.push(root);
    while (!q.empty()) {
        node* f = q.front();
        q.pop();
        cout << f->data << " ";
        if (f->left) {
            q.push(f->left);
        }
        if (f->right) {
            q.push(f->right);
        }
    }
}
void levelWiseLevelOrder(node*root) {
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node* f = q.front();
        q.pop();
        if (f == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << f->data << " ";
            if (f->left) {
                q.push(f->left);
            }
            if (f->right) {
                q.push(f->right);
            }
        }
    }
}
void printLeftView(node*root) {
    queue<node*>q;
    vector<vector<int>>levels;
    vector<int>temp;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node* f = q.front();
        q.pop();
        if (f == NULL) {
            levels.push_back(temp);
            temp.clear();
            // cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            // cout << f->data << " ";
            temp.push_back(f->data);
            if (f->left) {
                q.push(f->left);
            }
            if (f->right) {
                q.push(f->right);
            }
        }
    }
    for (auto x : levels) {
        cout << x.front() << " ";
    }
}
void printRightView(node*root) {
    queue<node*>q;
    vector<vector<int>>levels;
    vector<int>temp;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node* f = q.front();
        q.pop();
        if (f == NULL) {
            levels.push_back(temp);
            temp.clear();
            // cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            // cout << f->data << " ";
            temp.push_back(f->data);
            if (f->left) {
                q.push(f->left);
            }
            if (f->right) {
                q.push(f->right);
            }
        }
    }
    for (auto x : levels) {
        cout << x.back() << " ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    node*root = NULL;
    root = createTree();
    // inorder(root);
    // cout << endl;
    // preorder(root);
    // cout << endl;
    // postOrder(root);
    // cout << endl;
    // levelorder(root);
    // levelWiseLevelOrder(root);
    // cout << endl;
    printLeftView(root);
    cout << endl;
    printRightView(root);

    return 0;
}


// 3 4 -1 6 -1 -1 5 1 -1 -1 -1