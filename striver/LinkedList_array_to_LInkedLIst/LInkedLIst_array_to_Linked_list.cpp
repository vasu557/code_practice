#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int d,Node* next1){
		data=d;
		next=next1;
	}
	Node(int d){
		data=d;
		next = NULL;
	}
};
Node* convert(vector<int>nums){
	 if (nums.empty()) return NULL;
	Node* head = new Node(nums[0]);
	Node* temp=head;
	for(int i=1;i<nums.size();i++){
		Node* newNode = new Node(nums[i]);
		temp->next = newNode;
		temp = temp->next;
	}
	return head;
};
int main(){
	vector<int>vec={1,2,3,4,5};
	Node* head = convert(vec);
	while(head != NULL){
		cout<<head->data<<" ";
		head= head->next;
	}
	return 0;
}
