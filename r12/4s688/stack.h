#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item *pitems;
	int size;
	int top;

public:
	Stack(int n = 10);
	Stack(const Stack &st);
	~Stack(void);

	bool isempty(void) const;
	bool isfull(void) const;
	bool push(const Item &item);
	bool pop(Item &item);

	Stack & operator=(const Stack &st);
};

#endif