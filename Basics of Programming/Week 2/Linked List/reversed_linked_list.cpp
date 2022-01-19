//https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/reversed-linked-list-01b722df/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

int main ()
{
    int n;
    Node *head = nullptr, *tail = nullptr; 
    cin>>n;
    for (int i=0; i<n; i++) {
        int num;
        cin>>num;
        Node *temp = new Node;
        temp->data = num;
        temp->next = nullptr;

        if (head == nullptr)
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    stack<int> stk {};
    Node *iter2 = nullptr;
    for (Node *iter=head; iter; iter=iter->next)
        if (iter->data % 2 == 0) {
            stk.push (iter->data);
            if (!iter2)
                iter2 = iter;
        }
        else if (iter2 && !stk.empty()) {
            for (; !stk.empty() && iter2; stk.pop()) {
                iter2->data = stk.top();
                iter2 = iter2->next;
            }
            iter2 = nullptr;
        }
    for (; !stk.empty() && iter2; stk.pop()) {
        iter2->data = stk.top();
        iter2 = iter2->next;
    }

    for (Node *iter = head; iter;) {
        cout<<" "<<iter->data;
        iter = iter->next;
    }
    cout<<endl;
}