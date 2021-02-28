#include "list.h"

List::List(void)
{
	top = 0;
}

List::~List(void)
{

}

bool List::isempty(void) const
{
	return top == 0;
}

bool List::isfull(void) const
{
	return top == MAX;
}

bool List::push(const Item &item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool List::pop(Item &item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

void List::visit(void(*pf) (Item &a))
{
	for (int i = 0; i < top; i++)
		pf(items[i]);
}