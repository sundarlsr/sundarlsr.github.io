/* Stack */

#include<iostream>

using namespace std;

#define Max 10

class stack
{
	int a[Max];
	int top;
public:
	stack()
	{
		top = -1;
	}
	void push(int data)
	{
		cout << "top value" << top << endl;

		if ((top + 1) >= Max)
		{
			cout << "Stack is full" << endl;
		}
		else
		{
			top += 1;
			a[top] = data;
			cout << "Push item to stack" << a[top] << endl;
		}
	}

	void pop()
	{
		if (top == -1)
		{
			cout << "No item to pop" << endl;
		}
		else
		{
			cout << "The Poped item " << a[top--] << endl;

		}
	}

	void display()
	{
		cout << "top value" << top << endl;

		for (int i = 0; i <= top; i++)
		{
			cout << a[i] << endl;

		}
	}
};

int main()
{
	stack obj;

	obj.push(2);
	obj.push(4);
	obj.push(21);
	obj.push(42);
	obj.push(23);
	obj.push(44);
	obj.push(25);
	obj.push(46);
	obj.push(27);
	obj.push(48);
	obj.push(50);
	obj.push(497);

	obj.display();
	obj.pop();
	obj.pop();
	obj.pop();

	obj.display();

	return 0;
}
