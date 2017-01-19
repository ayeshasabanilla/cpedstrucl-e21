#include<iostream>

#include<stdlib.h>

#include<conio.h>

using namespace std;



struct node {

int data;

struct node * next;

} *head;

  

int count() {

  struct node * n;

  int c = 0;

  n = head;

  while (n != NULL) {

    n = n -> next;

    c++;

  }

  return c;

}

void display(struct node * r) {

  r = head;

  if (r == NULL) {

    return;

  }

  while (r != NULL) {

cout<<  r -> data;

    r = r -> next;

  }

  cout << endl;

}



void append(int);

void add(int);

void addafter(int , int);

int ddelete(int);

void insert(int);

void search(int);

void delocc(int);

void reverse ();



int main() {

  int i, num,loc, nodes;

  struct node * n;

  head = NULL;

  while (1) {

  system ("cls");

    cout << "Linked List Operations\n";

    cout << "===============\n";

    cout << "1. Insert \n";

    cout << "2. Add after \n";

    cout << "3. Delete \n";

    cout << "4. Delete Occurence \n";

    cout << "5. Display \n";

    cout << "6. Count \n";

    cout << "7. Reverse \n";

    cout << "8. Search \n";

    cout << "9. Exit\n";

    cout << "Enter your choice : ";

    cin >> i;

    if (i <= 0) {

      cout << "Enter only an Integer\n";

      exit(0);

    } else {

      switch (i) {

      case 1: //insert

        cout << "Enter the number to insert : ";

        cin >> num;

        insert(num);

        break;

      case 2: //addafter

      if (head == NULL){

      cout << "List is Empty\n";

 } else {

 	cout<<"Enter Value: ";

      cin>>num;

      cout<<"Enter Location: ";

      cin>>loc;

      addafter(num,loc);

 }

      break;

      case 3: //delete

        if (head == NULL)

          cout << "List is Empty\n";

        else {

          cout <<"Enter the number to delete : ";

          cin >> num;

          if (ddelete(num))

            cout << "Deleted succesfully" << num;

          else

            cout << "Not found on the list "<< num;

        }

        break;

      case 4: //del occur

      if (head == NULL){

      cout << "List is Empty\n";

 } else {

 	cout<<"Enter number to delete: ";

        cin>>num;

        delocc(num);

        cout<<"All " << num <<" has been deleted succesfully";

 }

     

        break;

      case 5: //display

        if (head == NULL) {

          cout << "List is Empty\n";

        } else {

          cout << "Element(s) in the list are : ";

        }

        display(n);

        break;

      case 6: 

      if (head == NULL){

      cout << "list of empty";

 }

else {

cout << "count of the list: " << count();

}

      break;

      case 7: 

      if (head == NULL){

cout<< "List is empty" <<endl;

} else {

cout << "Reverse elements of the list: "  << endl;

}

reverse();

display(n);

      break;

      case 8: //search

      cout << "Enter the number to search : ";

        cin >> num;

        search(num);

        break;

      case 9: 

        return 0;

      default:

        cout << "Invalid option\n";

      }

    }

    getch ();

  }

  return 0;

}

void append(int num) {

  struct node * temp, * right;

  temp = (struct node * ) malloc(sizeof(struct node));

  temp -> data = num;

  right = (struct node * ) head;

  while (right -> next != NULL)

    right = right -> next;

  right -> next = temp;

  right = temp;

  right -> next = NULL;

}



void add(int num) {

  struct node * temp;

  temp = (struct node * ) malloc(sizeof(struct node));

  temp -> data = num;

  if (head == NULL) {

    head = temp;

    head -> next = NULL;

  } else {

    temp -> next = head;

    head = temp;

  }

}



void addafter(int num, int loc) {

  int i;

  struct node * temp, * left, * right;

  right = head;

  for (i = 1; i <= loc; i++) {

    left = right;

    right = right -> next;

  }

  temp = (struct node * ) malloc(sizeof(struct node));

  temp -> data = num;

  left -> next = temp;

  left = temp;

  left -> next = right;

  return;

}



int ddelete(int num) {

  struct node * temp, * prev;

  temp = head;

  while (temp != NULL) {

    if (temp -> data == num) {

      if (temp == head) {

        head = temp -> next;

        return 1;

      } else {

        prev -> next = temp -> next;

        return 1;

      }

    } else {

      prev = temp;

      temp = temp -> next;

    }

  }

  return 0;

}



void insert(int num) {

  int c = 0;

  struct node * temp;

  temp = head;

  if (temp == NULL) {

    add(num);

  } else {

    while (temp != NULL) {

      if (temp -> data < num)

        c++;

      temp = temp -> next;

    }

    if (c == 0)

      add(num);

    else if (c > count())

      addafter(num, ++c);

    else

      append(num);

  }

}

void search(int val) {

  struct node * n;

  int c = 1;

  n = head;

  while (n != NULL) {

  if (n->data == val){

  cout << "Location: " << c;

 }

    n = n -> next;

    c++;

  }

 // cout << val << "not found in the list";

}



void delocc(int num) {

  struct node * n;

  int c = 0;

  n = head;

  while (n != NULL) {

  ddelete(num);

    n = n -> next;

    c++;

  }

}

void reverse () {

struct node *ptr1, *ptr2, *ptr3;

if (head->next == NULL){

return;

}

ptr1 = head;

ptr2 = ptr1->next;

ptr3 = ptr2->next;

ptr1->next = NULL;

ptr2->next = ptr1;

while (ptr3 != NULL){

ptr1 = ptr2;

ptr2 = ptr3;

ptr3 = ptr3->next;

ptr2->next = ptr1;

}

head = ptr2;

}

