#include <iostream>

// Node struct for a singly linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Singly linked list class
class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Function to insert a node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node by value
    void remove(int val) {
        if (!head) return;
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* prev = nullptr;
        Node* curr = head;
        while (curr && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }
        if (curr) {
            prev->next = curr->next;
            delete curr;
        }
    }

    // Function to display all nodes in the list
    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    SinglyLinkedList myList;

    // Inserting nodes
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);

    // Displaying nodes
    std::cout << "Initial list: ";
    myList.display();

    // Deleting a node
    myList.remove(3);

    // Displaying nodes after deletion
    std::cout << "List after deleting node with value 3: ";
    myList.display();

    return 0;
}
