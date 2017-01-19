#include <iostream>
#include <conio.h>
using namespace std;
	int y,n;
class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
    	cout << "Enter number: ";
    	cin >> val;
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }
    void display(){
    	struct Node *n=head;
        while (head != NULL){
        	cout<< n -> x;
			n = n -> next;
		}	
		}
private:
    Node *head; 
};

int main(){
    LinkedList list;
while(1)
{	
	system("cls");
	int choice,x,y;
    cout << "Menu\n";
    cout << "[1] Add\n";
    cout << "[2] Pop\n";
    cout << "[3] Display\n";
    cout << "[4] Exit\n";
    cout << "Enter Choice: \n";
    cin >> choice;
    switch (choice)
    {
    	case 1:
    		{
    			list.addValue(x);
    			y++;
			}break;
		case 2:
		
			break;
		case 3: 
			{
				if(y==0){
					cout << "Stack is empty!";
				} else {
				list.display();
				}
			} break;
		case 4:
			{
				exit(1);
			}break;
		default: cout << "Invalid Choice!\n"; break;
	}
	cout << endl;
		system("pause");
	}
    
    
    
    getch();
    return 0;
}
