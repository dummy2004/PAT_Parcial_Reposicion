#include "Ejercicio01.h"

Node<int>* Ejercicio01::addTwoNumbers(Node<int>* l1, int sizeL1, Node<int>* l2, int sizeL2)
{
    int carry = 0;
    Node<int>* dummy = new Node<int>(0);
    Node<int>* curr = dummy;

    while (sizeL1 > 0 || sizeL2 > 0) {
        int x = (sizeL1 > 0) ? l1->data : 0;
        int y = (sizeL2 > 0) ? l2->data : 0;
        int sum = carry + x + y;
        carry = sum / 10;

        curr->next = new Node<int>(sum % 10);
        curr = curr->next;

        if (sizeL1 > 0) {
            l1 = l1->next;
            sizeL1--;
        }
        if (sizeL2 > 0) {
            l2 = l2->next;
            sizeL2--;
        }
    }
    if (carry > 0) {
        curr->next = new Node<int>(carry);
    }

    return dummy->next;
    return nullptr;
}