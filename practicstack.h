#include <cstddef>
#ifndef PRACTICSTACK_H
#define PRACTICSTACK_H

using ValueType = double;

class Stack {
    class Node {
    public:
        Node* pnext;
        ValueType data;

        Node(ValueType data = ValueType(), Node* pnext = nullptr)
        {
            this->data = data;
            this->pnext = pnext;
        }
        void insertNext(const ValueType& value);
    };

public:
    Stack();
    ~Stack();

    void pop_front();
    void clear();
    void push_front(ValueType data);
    bool isEmpty();
    ValueType Top();
    size_t Size();
    void Show();

private:
    Node* head;
    size_t elements_counter;
};

#endif
