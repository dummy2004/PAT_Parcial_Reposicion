#include "Ejercicio02.h"

Node<char>* Ejercicio02::reverseKGroup(Node<char>* head, int k)
{
    Node<char>* newHead = nullptr;
    Node<char>* prev = nullptr;
    Node<char>* curr = head;

    while (curr != nullptr) {
        Node<char>* nextNode = curr->next;
        Node<char>* newNode = nullptr;

        for (int i = 0; i < k && curr != nullptr; ++i) {
            Node<char>* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

            if (newNode == nullptr) {
                newNode = prev;
            }
        }

        if (newHead == nullptr) {
            newHead = newNode;
        }
        else {
            Node<char>* temp = newHead;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        if (curr == nullptr) {
            break;
        }
    }

    return newHead;
    return nullptr;
}
