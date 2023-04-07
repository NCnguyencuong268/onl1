//Nguon tham khao: https://vimentor.com/en/lesson/ngan-xe-p

#include <iostream>
using namespace std;
#define SIZE 500

class Stack
{
private:
         int A[SIZE];  
         int top;  
public:

	Stack()
	{
		top = 0; /* Khi stack rô~ng, top = 0 */
	}

	void Push(int n) 
	{
	  if(top == SIZE) { 
        cout << "ERROR: Stack overflow!" << endl;
			return;
		}
		A[top++] = n;
	}
 

	void Pop() 
	{
		if(top == 0) { 
			cout << "ERROR: Stack is empty" << endl;
			return;
		}
		top--;
	}
 
	int Top() 
	{
		return A[--top]; 
	}
 
	bool isEmpty()
	{
		if(top == 0) return true;
		return false;
	}

	
	void Print() {
		int i;
		for(i = 0; i<top; i++)
			cout << A[i] << " ";
		cout << endl;
	}
};
int main()
{
    
	Stack S;
	S.Push(1); /* 1 */
	S.Push(2); /* 1, 2 */
	S.Print(); 
	S.Push(5); /* 1, 2, 5 */
	S.Print();
	S.Pop();    /* 1, 2 */
	S.Print();
	
	return 0;
}
