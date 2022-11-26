//�����ڷ� 
//�迭,���Ḯ��Ʈ ����Ʈ�� ��������!
//���ⱸ�� �ϳ��̴����ⱸ�� �ϳ��̴�!
//������ �۾� pop->�������� ������ ���ؼ��� �� ��������
// �߰��� push 
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
		insertnode->next = head.next;
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
		cout << "�����Ͱ� ����!" << endl;
		return;
	}
	while (cur->next != NULL) {
		cout << "�����Ͱ�:" << cur->data << "   �������� �ּ�" << cur << "    �������� ���� �ּ�" << cur->next << endl;
		cur = cur->next;
	}
	cout << "�����Ͱ�:" << cur->data << "   �������� �ּ�" << cur << "    �������� ���� �ּ�" << cur->next << endl;
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

		cout << "deletedata():" << cur->next->data << "    �ּ�" << cur->next << endl;
		cur->next = deletedata->next;
		delete deletedata;
	}
	cout << endl;

}
void releaselist() {

	cout << "releaselist():" << endl;
	node* cur = head.next;
	while (cur != NULL) {
		node* deletenode = cur;
		cout << "�ּ� ����" << deletenode << "������:" << deletenode->data << endl;
		cur = cur->next;
		delete deletenode;

	}
	head.next = NULL;


}

void enqueue(const char* data) {
	inserAttail(data);	
}
void dequeue(node* popnode) {

	node* sp = head.next;
	if (isempty()) {
		return;
	}
	memcpy(popnode, sp, sizeof(node));
	head.next = sp->next;
	delete sp;
	

}



int main() {
	//queue �׽�Ʈ
	node s = { 0 };

	enqueue("test01");
	enqueue("test02");
	enqueue("test03");
	printdata();

	dequeue(&s);
	cout << s.data << endl;
	printdata();
	dequeue(&s);
	cout << s.data << endl;
	printdata();
	dequeue(&s);
	cout << s.data << endl;
	printdata();

	





	return 0;







}
