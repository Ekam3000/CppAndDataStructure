#include <iostream>
using namespace std;
struct node {                                                               
      int data;               
      node *next;           
};  
int printList(node *traverse) {
    if (traverse->next == NULL) {
        return -1;
    }
    traverse=traverse->next;
    printList(traverse);
    cout << traverse->data << endl;
    return 0;
}

int main() {
    node *head = NULL;      
    for (int i = 0; i < 10; i++) {
        node *newEntry = new node;
        newEntry->data = i;
        newEntry->next = head;
        head = newEntry;
    }
    printList(head);
    return 0;
}