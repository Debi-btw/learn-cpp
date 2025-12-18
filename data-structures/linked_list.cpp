#include <iostream>
using namespace std;

struct Node {
    double val;
    Node* next;
    Node(double v, Node* n=nullptr) : val(v), next(n) {}
};

double sumList(Node* head) {
    double total = 0;
    for (Node* cur = head; cur; cur = cur->next) total += cur->val;
    return total;
}

int main() {
    Node* head = nullptr;
    double tmp;

    cout << "Enter numbers (0 to stop): ";
    while (cin >> tmp && tmp != 0)       // 0 acts as sentinel
        head = new Node(tmp, head);

    cout << "Sum = " << sumList(head) << endl;

    // quick cleanup
    while (head) { Node* t = head; head = head->next; delete t; }
    return 0;
}
