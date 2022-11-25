#include <iostream>
using namespace std;
typedef struct node
{
	char data[64];
	node* next;

}node;
node head = { 0 };

bool isempty() {

	if (head.next == NULL) {
		return true;
	}
	else {
		return false;
	}

}
void insertAtHead(const char* data) {
	
	node* insertnode = new node;
	strcpy_s(insertnode->data, data);
	if (isempty()) {
		head.next = insertnode;	
		insertnode->next = NULL;
	}
	else {
		 insertnode->next=head.next;
		 head.next = insertnode;
	}
}

void inserAttail(const char* data) {
	
	node* cur = &head;
	node* insertdata = new node;
	strcpy_s(insertdata->data, data);
	if (isempty()) {
		cur->next = insertdata;		
		insertdata->next = NULL;
		return;
	}
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = insertdata;
	insertdata->next = NULL;

}
void printdata() {
	node* cur = head.next;
	if (isempty()) {
		cout << "데이터가 없다!" << endl;
		return;
	}
	while (cur->next != NULL) {
		cout << "데이터값:" << cur->data<<"   데이터의 주소"<<cur<<"    데이터의 다음 주소" <<cur->next<< endl;
		cur = cur->next;
	}
	cout << "데이터값:" << cur->data << "   데이터의 주소" << cur << "    데이터의 다음 주소" << cur->next << endl;
	cout << endl;

}
node* finddata(const char* data) {

	node* cur = &head;
	node* pre = &head;
	if (isempty()) {

		return 0;
	}
	while (cur->next != NULL) {
		cur = cur->next;
		if (strcmp(cur->data, data) == 0) {
			return pre;

		}
		pre = pre->next;

	}



}
void deleteData(const char* data) {
	
	node* cur = finddata(data);
	if (cur != 0) {
		node* deletedata = cur->next;
		
		cout << "deletedata():" << cur->next->data << "    주소" << cur->next << endl;
		cur->next = deletedata->next;
		delete deletedata;
	
	}


	cout << endl;

}
void releaselist() {

	cout << "releaselist():" << endl;
	node* cur = head.next;
	while (cur != NULL) {
		node* deletenode =cur ;
		cout << "주소 삭제" << deletenode << "데이터:" << deletenode->data << endl;
		cur = cur->next;
		delete deletenode;
		
	}
	head.next = NULL;





}
int main() {
	puts("**insertathead():**");
	
	insertAtHead("test01");
	

	insertAtHead("test02");
	
	insertAtHead("test03");
	printdata();
	
	puts("**insertattial():**");

	inserAttail("test00");
	printdata();


	
	

	puts("**deleatadata():**");

	deleteData("test03");
	printdata();
	deleteData("test02");
	printdata();


	releaselist();







}