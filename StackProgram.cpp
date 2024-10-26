#include <iostream>
#include <string>

class Stack {
private:
	int* array;
	int top;
	int capacity;

public:
	Stack(int size) {
		capacity = size;
		top = -1;
		array = new int[capacity];
	}

	~Stack() {
		delete[] array;
	}

public:
	bool isFull() {
		return top == capacity-1;
	}

public:
	bool isEmpty() {
		return top == -1;
	}

public:
	int peek() {
		if (!isEmpty()) {
			return array[top];
		}
		std::cout << "Stack is empty" << std::endl;
		return -1;
	}

public:
	void push(int data) {
		if (isFull()) {
			std::cout << "Stack is full." << std::endl;
			return;
		}
		array[++top] = data;
	}

public:
	int pop() {
		if (isEmpty()) {
			std::cout << "Stack is empty." << std::endl;
			return -1;
		}
		return array[top--];
	}

public:
	void printStack() {
		for (int i = 0; i <= top; i++) {
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
	}
};


int main() {
	Stack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	s.pop();
	s.pop();
	s.printStack();
	return 0;
}