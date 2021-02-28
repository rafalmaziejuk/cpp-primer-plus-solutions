#ifndef LIST_H_
#define LIST_H_

#include <iostream>

typedef int Item;

class List
{
	enum { MAX = 10 };
	Item items[MAX];
	int top;

public:
	List(void);
	~List(void);

	bool isempty(void) const;
	bool isfull(void) const;
	bool push(const Item &item);
	bool pop(Item &item);
	void visit(void(*pf) (Item &a));
};

#endif