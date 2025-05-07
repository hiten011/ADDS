#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::LinkedList(vector<int> arr) {
    Node* prev = new Node(-1, nullptr);
    head = prev;

    for (auto i : arr) {
        Node* temp = new Node(i);
        prev->next = temp;
        prev = prev->next;
    }

    head = head->next;
}

void LinkedList::removeFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
}

void LinkedList::removeMiddle() {
    if (head == nullptr) {
        return;
    }

    Node* slow = new Node(-1, head);
    Node* fast = slow;
    head = slow;
    while (slow->next != nullptr && fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    head = head->next;
}

void LinkedList::removeLast() {
    if (head == nullptr) {
        return;
    }

    Node* temp = new Node(-1, head);
    head = temp;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    Node* rem = temp->next;
    delete rem;

    temp->next = nullptr;
    head = head->next;
}

void LinkedList::removeNthEnd(int index) {
    if (head == nullptr || index <= 0) {
        return;
    }

    // finding the length of list
    Node* temp = head;
    int len = 0;
    while (temp != nullptr) {
        temp = temp->next;
        len++;
    }

    if (index > len) return;

    // removing
    Node* slow = new Node(-1, head);
    Node* fast = head;
    head = slow;
    for (int i = 0; i < index; i++) {
        fast = fast->next;
    }

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    Node* rem = slow->next;
    slow->next = slow->next->next;
    delete rem;

    head = head->next;
}

void LinkedList::removeIndex(int index) {
    if (head == nullptr || index < 0) return;
    if (index == 0) {
        removeFront();
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
        if (temp == nullptr || temp->next == nullptr) return;
    }

    Node* rem = temp->next;
    temp->next = temp->next->next;

    delete rem;
}

void LinkedList::remove(int num) {
    if (head == nullptr) return;

    Node* temp = head;
    head = new Node(-1, temp);
    Node* prev = head;
    while (temp != nullptr) {
        if (temp->data == num) {
            prev->next = temp->next;
            delete temp;
            head = head->next;
            return;
        }

        temp = temp->next;
        prev = prev->next;
    }

    head = head->next;
}

void LinkedList::swapValues(int i, int j) {
    if (head == nullptr) return;
    
    Node* tempi = head;
    Node* tempj = head;
    while(i != 0 || j != 0) {
        if (i > 0) {
            i--;
            tempi = tempi->next;
        }

        if (j > 0) {
            j--;
            tempj = tempj->next;
        }

        if (tempi == nullptr || tempj == nullptr) {
            // position doesn't exists
            return;
        }
    }

    int tempData = tempi->data;
    tempi->data = tempj->data;
    tempj->data = tempData;
}

void LinkedList::swapNode(int i, int j) {
    if (head == nullptr) return;
    
    Node* tempi = head;
    Node* previ = new Node(-1, head);
    Node* tempj = head;
    Node* prevj = new Node(-1, head);
    head = previ;
    while(i != 0 || j != 0) {
        if (i > 0) {
            i--;
            previ = previ->next;
            tempi = tempi->next;
        }

        if (j > 0) {
            j--;
            prevj = prevj->next;
            tempj = tempj->next;
        }

        if (tempi == nullptr || tempj == nullptr) {
            // position doesn't exists
            head = head->next;
            return;
        }
    }

    previ->next = tempj;
    prevj->next = tempi;
    Node* temp = tempj->next;
    tempj->next = tempi->next;
    tempi->next = temp;

    head = head->next;
}

void LinkedList::removeDuplicate() {
    if (head == nullptr) return;
    Node* curr = head;
    while (curr->next) {
        if (curr->data == curr->next->data) {
            Node* rm = curr->next;
            curr->next = rm->next;
            delete rm;
        }
        else {
            curr = curr->next;
        }
    }
}

void LinkedList::print() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

LinkedList::~LinkedList() {
  while (head != nullptr) {
    Node* temp = head->next;
    delete head;

    head = temp;
  }
}
