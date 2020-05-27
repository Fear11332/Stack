#include <iostream>
#include "practicstack.h"

Stack::Stack()
{
    elements_counter = 0;
    head = nullptr;
}

Stack::~Stack()
{
    clear();
}

void Stack::clear()
{
    while (elements_counter) {
        pop_front();
    }
}

ValueType Stack::Top()
{
    return this->head->data;
}

void Stack::pop_front()
{
    Node* temp = head;
    head = head->pnext;

    delete temp;
    elements_counter--;
}

void Stack::push_front(ValueType data)
{
    head = new Node(data, head);
    elements_counter++;
}

bool Stack::isEmpty()
{
    if (elements_counter) {
        return 1;
    }

    else {
        return 0;
    }
}

size_t Stack::Size()
{
    return elements_counter;
}

void Stack::Show()
{
    Node* current = this->head;

    while (current->pnext != nullptr) {
        std::cout << current->data;
        current = current->pnext;
    }
    std::cout << current->data;
}
