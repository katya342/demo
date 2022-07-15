//
// Created by keke on 13.07.22.
//

#ifndef STACK_QUEUE_QUEUE_H
#define STACK_QUEUE_QUEUE_H

#endif //STACK_QUEUE_QUEUE_H
template<typename type>
class Queue {
private:
    type *wait;			//Î÷åðåäü
    int maxLength;		//максимальный размер очереди
    int length;			//текущий размер очереди
public:
    Queue();			//Êîíñòðóêòîð
    Queue(int m);		//Êîíñòðóêòîð ñ ðàçìåðîì î÷åðåäè
    void add(type c);	//Äîáàâëåíèå ýëåìåíòà
    type extract();		//Èçâëå÷åíèå ýëåìåíòà
    void clear();		//Î÷èñòêà î÷åðåäè
    bool is_empty();	//Ïðîâåðêà ñóùåñòâîâàíèÿ ýëåìåíòîâ â î÷åðåäè
    bool is_full();		//Ïðîâåðêà íà ïåðåïîëíåíèå î÷åðåäè
    int get_count();	//Êîëè÷åñòâî ýëåìåíòîâ â î÷åðåäè
    void show();		//äåìîíñòðàöèÿ î÷åðåäè
    ~Queue();			//Äåñòðóêòîð
};

template<typename type>
Queue<type>::Queue() {
    this->wait = nullptr;
    this->maxLength = 1;
    this->length = 0;
}

template<typename type>
Queue<type>::Queue(int m) {
    this->maxLength = m;
}

template<typename type>
void Queue<type>::add(type c) {
    this->wait[length++] = c;
    if(is_full())
        this->maxLength = this->wait[0];
}

template<typename type>
bool Queue<type>::is_empty() {
    if (this->wait == nullptr)
        return true;
        else
            return false;
}

template<typename type>
bool Queue<type>::is_full() {
    if(maxLength < length)
    {
        this->maxLength = this->wait[0];
        return true;
    }
        else
            return false;
}

template<typename type>
int Queue<type>::get_count() {
    return this->maxLength;
}

template<typename type>
void Queue<type>::clear() {
    this->wait = nullptr;
}

template<typename type>
Queue<type>::~Queue() {
    delete [] wait;
}

template<typename type>
type Queue<type>::extract() {
    return this->wait[length];
}

template<typename type>
void Queue<type>::show() {
    for(int i = 0; i < this->maxLength; ++i)
        cout << this->wait[i] << " " ;
}
