#ifndef _QUEUETP_H_
#define _QUEUETP_H_

#include <iostream>

template <class Item>
class QueueTp
{
private:
	  struct Node 
	  { 
		  Item item; 
		  struct Node *next; 
	  };
	  Node *front;
	  Node *rear;
	  int items;
	  const int qsize;

	  QueueTp(const QueueTp &q) : qsize(0) { }
	  QueueTp & operator=(const QueueTp &q) { return *this; }

public:
	QueueTp(int qs = 0);
	~QueueTp(void);

	bool isempty(void) const;
	bool isfull(void) const;
	int queuecount(void) const;
	bool enqueue(const Item &item);
	bool dequeue(Item &item);

	Item & operator[](int indeks);
};

template <class Item>
QueueTp<Item>::QueueTp(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

template <class Item>
QueueTp<Item>::~QueueTp(void)
{
	Node *temp = NULL;

	while (front != NULL)  
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template <class Item>
bool QueueTp<Item>::isempty(void) const
{
	return items == 0;
}

template <class Item>
bool QueueTp<Item>::isfull(void) const
{
	return items == qsize;
}

template <class Item>
int QueueTp<Item>::queuecount(void) const
{
	return items;
}

template <class Item>
bool QueueTp<Item>::enqueue(const Item &item)
{
	if (isfull())
		return false;

	Node *add = new Node;

	if (add == NULL)
		return false;

	add->item = item;
	add->next = NULL;
	items++;

	if (front == NULL)
		front = add;
	else
		rear->next = add;

	rear = add;

	return true;
}

template <class Item>
bool QueueTp<Item>::dequeue(Item &item)
{
	if (front == NULL)
		return false;

	item = front->item;
	items--;

	Node *temp = front;
	front = front->next;

	delete temp;

	if (items == 0)
		rear = NULL;

	return true;
}

template <class Item>
Item & QueueTp<Item>::operator[](int indeks)
{
	Node *temp = front;

	for (int i = 0; i < indeks; i++)
		temp = temp->next;

	return temp->item;
}

#endif