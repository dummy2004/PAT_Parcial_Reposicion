#include "Ejercicio03.h"
#include <unordered_set>

Node<int>* Ejercicio03::detectCycle(Node<int>* head)
{
    Node<int>* slow = head;
    Node<int>* fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == nullptr || fast->next == nullptr)
    {
        return nullptr;
    }

    slow = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}