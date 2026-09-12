class Node{
	public :
	int data;
	Node* next;
	public:
	Node(int val,Node* next1){
		data  = val;
		next = next1;
	}
	Node(int val){
		data = val;
		next = nullptr;
	}
};

Node* arrtolin(vector<int>&arr,Node* head){
	Node* temp = head;
	for(int i=1;i<arr.size();i++){
		Node* y = new Node(arr[i]);
		temp->next = y;
		temp=y;
	}
	return head;
}
void length(Node* head){
	Node* temp = head;
	int count=0;
	while(temp != nullptr){
		count+=1;
		temp = temp->next;
	}
	cout<<count<<" ";
}

void traverse(Node* head){
	Node* temp = head;
	while(temp != nullptr){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	vector<int>vec = {2,5,6,1,8};
	Node* head = new Node(vec[0]);
	arrtolin(vec,head);
	length(head);
	traverse(head);
}
