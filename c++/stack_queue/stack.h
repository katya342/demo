#ifndef STACK_QUEUE_STACK_H
#define STACK_QUEUE_STACK_H

#endif //STACK_QUEUE_STACK_H
#include <iostream>

using namespace std;

template<typename type>
class Stack {
    type *data;				// Ìàññèâ äëÿ õðàíåíèÿ äàííûõ
    int _top;				// Óêàçàòåëü íà âåðøèíó ñòåêà
public:
    Stack();					// Êîíñòðóêòîð ïî óìîë÷àíèþ
    Stack(int size);			// Êîíñòðóêòîð äëÿ èíèöèàëèçàöèè ðàçìåðà ñòåêà
    Stack(const Stack& st);		// Êîíñòðóêòîð êîïèðîâàíèÿ
    Stack(Stack&& st);			// Êîíñòðóêòîð ïåðåíîñà

    bool empty()const;			// Ïóñòîé ñòåê?
    void push(type &val);		// Äîáàâëåíèå ýëåìåíòà â êîíåö ñòåêà
    void push(type &&val);		// Ïåðåíîñ ýëåìåíòà â êîíåö ñòåêà
    int size()const;			// Êîëè÷åñòâî ýëåìåíòîâ â ñòåêå
    void pop();					// Óäàëåíèå ïîñëåäíåãî ýëåìåíòà â ñòåêå
    const type& top()const;		// Âîçâðàò ïîñëåäíåãî ýëåìåíòà â ñòåêå
    void swap(Stack&val);		// Îáìåí 2õ ñòåêîâ ìåñòàìè

    ~Stack();					// Äåñòðóêòîð
};

template<typename type>
Stack<type>::Stack() {
    this->data = nullptr;
    this->_top = -1;
}

template<typename type>
Stack<type>::Stack(int size) {
    this->_top = size;
}

template<typename type>
Stack<type>::Stack(const Stack &st) {
    data = new int [st.size()];
    for (int i = 0; i < st.size(); ++i) {
        this->data[i] = st.data[i];
    }

}

template<typename type>
bool Stack<type>::empty() const {
    if(this->_top == -1)
        return true;
    else
        return false;
}

template<typename type>
const type &Stack<type>::top() const {
    return this->_top;
}

template<typename type>
void Stack<type>::push(type &val) {
    if (this->_top == -1)
    this->data[_top++] = val;

}

template<typename type>
Stack<type>::~Stack() {
    delete [] data;
}

template<typename type>
Stack<type>::Stack(Stack &&st) {
    this->_top = st._top;

}
template<typename type>
void Stack<type>::pop() {
    this->data[_top--];
}

template<typename type>
int Stack<type>::size() const {
    return this->_top + 1;
}

template<typename type>
void Stack<type>::swap(Stack &val) {

}
