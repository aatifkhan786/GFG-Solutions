/*
class Node {
	public:
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	Node *insertPos(Node *head, int pos, int val) {
		
		// code here
		Node* newNode = new Node(val);
		if (pos == 1) {
			newNode->next = head;
			head = newNode;
			return head;
		}
		Node* temp = head;
		// int count=1;
		// while(count<pos-1){
		//     temp=temp->next;
		//     count++;
		// }
		// newNode->next=temp->next;
		// temp->next=newNode;
		
		for (int i = 1; i<pos-1; i++) {
			temp = temp->next;
			
		}
		newNode->next = temp->next;
		temp->next = newNode;
		return head;
	}
};
