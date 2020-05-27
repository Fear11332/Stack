#include <iostream>
#include "practicstack.h"

using namespace std;

int main()
{
    Stack st;
    size_t numbers_count;

    cout << "enter stack elements count" << endl;
    cin >> numbers_count;

    for (int i = 0; i < numbers_count; i++) {
        st.push_front(rand() % 10);
    }

    cout << endl;
    cout << "show elements in stack: ";
    st.Show();

    cout << endl;
    cout << endl;
    cout << "stack size : " << st.Size();

    cout << endl;
    cout << endl;
    cout << "stack top elements is:" << st.Top();

    cout << endl;
    cout << endl;
    cout << "pop front element" << endl;
    cout << "top element now is:";
    st.pop_front();
    cout << st.Top();

    cout << endl;
    cout << endl;
    cout << "show stack size :";
    if (st.isEmpty()) {
        cout << " stack not empty";
    }

    else {
        cout << " stack is empty";
    }

    cout << endl;
    cout << endl;
    cout << "show elements in stack :";
    st.Show();

    cout << endl;
    cout << endl;
    cout << "clear stack:";
    st.clear();
    if (st.isEmpty()) {
        cout << " stack not empty";
    }

    else {
        cout << " stack is empty";
    }

    cout << endl;

    return 0;
}
