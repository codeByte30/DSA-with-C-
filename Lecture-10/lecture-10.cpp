#include<bits/stdc++.h>
using namespace std;
//defining a node
class node {
public:
    int data;
    node*next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insertAtHead(node*&head, int data) {
    node*n = new node(data);
    //updation
    n->next = head;
    head = n;
    return;
}
void insertAtTail(node*&head, int data) {
    if (head == NULL) {
        insertAtHead(head, data);
        return;
    }

    node*temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    node*n = new node(data);
    temp->next = n;
}
node*middlePoint(node*head) {
    node*fast = head;
    node*slow = head;
    while (fast != NULL and fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
void print(node*head) {
    node*temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node*merge(node*head1, node*head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }
    node*n;
    if (head1->data <= head2->data) {
        n = head1;
        n->next = merge(head1->next, head2);
    }
    else {
        n = head2;
        n->next = merge(head1, head2->next);
    }
    return n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    node*head = NULL;
    node*head2 = NULL;
    // insertAtHead(head, 10);
    // insertAtHead(head, 5);
    // insertAtHead(head, 4);
    // insertAtHead(head, 3);
    // insertAtHead(head, 2);
    // insertAtHead(head, 1);
    // print(head);
    insertAtTail(head, 10);
    insertAtTail(head, 11);
    insertAtTail(head, 12);
    insertAtTail(head, 14);
    insertAtTail(head, 15);
    insertAtTail(head, 16);
    print(head);
    cout << endl;
    // node*mid = middlePoint(head);
    // cout << mid->data << " ";
    insertAtTail(head2, 1);
    insertAtTail(head2, 1);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    print(head2);
    node*mergedLinkedList = merge(head, head2);
    cout << endl;
    print(mergedLinkedList);




    return 0;
}