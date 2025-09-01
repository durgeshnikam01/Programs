// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // struct Node
// // // // {
// // // // int data;
// // // // struct Node* next;
// // // // };
// // // // struct Node* create(int d)
// // // // {
// // // //      struct Node* nn=new Node();
// // // //      nn->data=d;
// // // //      nn->next=nullptr;
// // // //      return nn;
// // // // }
// // // // struct Node* insert(int d,struct Node* head)
// // // // {
// // // // struct Node* nn=create(d);
// // // // if(head==nullptr)
// // // // head=nn;
// // // // else
// // // // {
// // // // nn->next=head;
// // // // head=nn;
// // // // }
// // // // return head;
// // // // }
// // // // void display(struct Node* head)
// // // // {
// // // // struct Node* temp=head;
// // // // if(head==nullptr)
// // // // cout<<"List is empty";
// // // // else
// // // // {
// // // // while(temp!=nullptr)
// // // // {
// // // // cout<<temp->data<<"->";
// // // // temp=temp->next;
// // // // }
// // // // cout<<endl;
// // // // }
// // // // }
// // // // struct Node* insertmid(int pos,int data,struct Node* head)
// // // // {
// // // //            struct Node* nn=create(data);
// // // //            if(head==nullptr)
// // // // 	head=nn;
// // // //            else if(pos==1)
// // // // 	head=insert(data,head);
// // // //            else
// // // //            {
// // // // 	int count=0;
// // // // 	struct Node* temp=head;
// // // // 	while(temp!=nullptr)
// // // // 	{
// // // // 	      count++;
// // // // 	      temp=temp->next;
// // // // 	}
// // // // 	if(pos>(count+1))
// // // // 	       cout<<"Invalid Position";
// // // // 	else
// // // // 	{
// // // // 	       temp=head;
// // // // 	       for(int i=0;i<pos-2;i++)
// // // // 		temp=temp->next;
// // // // 	       nn->next=temp->next;
// // // // 	       temp->next=nn;
// // // // 	}
// // // //          }
// // // // return head;
// // // // }	       
// // // // int main()
// // // // {
// // // //       struct Node* head=nullptr;
// // // //       int n,pos,data;
// // // //       cin>>n;
// // // //       for(int i=0;i<n;i++)
// // // //       {
	
// // // // 	cin>>data;
// // // // 	head=insert(data,head);
// // // //       }
// // // //       display(head);
// // // //       cin>>pos;
// // // //       cin>>data;
// // // //       head=insertmid(pos,data,head);
// // // //       display(head);
// // // // }

// // // // FINDING THE MIDDLE ELEMENT OF A LINKED LIST
// // // #include <iostream>
// // // using namespace std;

// // // struct Node {
// // //     int data;
// // //     Node* next;
    
// // //     Node(int val) {
// // //         data = val;
// // //         next = nullptr;
// // //     }
// // // };

// // // class LinkedList {
// // // private:
// // //     Node* head;

// // // public:
// // //     LinkedList() {
// // //         head = nullptr;
// // //     }

// // //     void insert(int val) {
// // //         Node* newNode = new Node(val);
// // //         if (!head) {
// // //             head = newNode;
// // //             return;
// // //         }
// // //         Node* temp = head;
// // //         while (temp->next)
// // //             temp = temp->next;
// // //         temp->next = newNode;
// // //     }

// // //     void display() {
// // //         Node* temp = head;
// // //         while (temp) {
// // //             cout << temp->data << " -> ";
// // //             temp = temp->next;
// // //         }
// // //         cout << "NULL\n";
// // //     }

// // //     void findMiddle() {
// // //         if (!head) {
// // //             cout << "List is empty.\n";
// // //             return;
// // //         }
// // //         Node* slow = head;
// // //         Node* fast = head;
// // //         while (fast && fast->next) {
// // //             slow = slow->next;
// // //             fast = fast->next->next;
// // //         }
// // //         cout << "Middle element: " << slow->data << endl;
// // //     }
// // // };

// // // int main() {
// // //     LinkedList list;
// // //     int n, val;
// // //     cout << "Enter number of elements: ";
// // //     cin >> n;
// // //     cout << "Enter elements: ";
// // //     for (int i = 0; i < n; ++i) {
// // //         cin >> val;
// // //         list.insert(val);
// // //     }
// // //     list.display();
// // //     list.findMiddle();
// // //     return 0;
// // // }

// // // DOUBEL LINKED LIST
// // // #include <iostream>
// // // using namespace std;

// // // struct DNode {
// // //     int data;
// // //     DNode* prev;
// // //     DNode* next;
// // //     DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
// // // };

// // // class DoublyLinkedList {
// // // private:
// // //     DNode* head;
// // //     DNode* tail;
// // // public:
// // //     DoublyLinkedList() : head(nullptr), tail(nullptr) {}

// // //     void insertEnd(int val) {
// // //         DNode* newNode = new DNode(val);
// // //         if (!head) {
// // //             head = tail = newNode;
// // //             return;
// // //         }
// // //         tail->next = newNode;
// // //         newNode->prev = tail;
// // //         tail = newNode;
// // //     }

// // //     void insertFront(int val) {
// // //         DNode* newNode = new DNode(val);
// // //         if (!head) {
// // //             head = tail = newNode;
// // //             return;
// // //         }
// // //         newNode->next = head;
// // //         head->prev = newNode;
// // //         head = newNode;
// // //     }

// // //     void displayForward() {
// // //         DNode* temp = head;
// // //         cout << "Forward: ";
// // //         while (temp) {
// // //             cout << temp->data << " <-> ";
// // //             temp = temp->next;
// // //         }
// // //         cout << "NULL\n";
// // //     }

// // //     void displayBackward() {
// // //         DNode* temp = tail;
// // //         cout << "Backward: ";
// // //         while (temp) {
// // //             cout << temp->data << " <-> ";
// // //             temp = temp->prev;
// // //         }
// // //         cout << "NULL\n";
// // //     }

// // //     ~DoublyLinkedList() {
// // //         DNode* temp = head;
// // //         while (temp) {
// // //             DNode* next = temp->next;
// // //             delete temp;
// // //             temp = next;
// // //         }
// // //     }
// // // };

// // // int main() {
// // //     DoublyLinkedList dll;
// // //     int n, val;
// // //     cout << "Enter number of elements: ";
// // //     cin >> n;
// // //     cout << "Enter elements: ";
// // //     for (int i = 0; i < n; ++i) {
// // //         cin >> val;
// // //         dll.insertEnd(val);
// // //     }
// // //     dll.displayForward();
// // //     dll.displayBackward();

// // //     cout << "Insert at front: ";
// // //     cin >> val;
// // //     dll.insertFront(val);
// // //     dll.displayForward();
// // //     dll.displayBackward();
// // //     return 0;
// // // }
// // // ADDING A NODE AT THE END OF A LINKED LIST & DELETING A NODE AT FIRST POSITION
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // struct Node
// // // {
// // // struct Node* prev;
// // // int data;
// // // struct Node* next;
// // // };
// // // struct Node* create(int d)
// // // {
// // // struct Node* nn=new Node();
// // // nn->prev=nullptr;
// // // nn->data=d;
// // // nn->next=nullptr;
// // // return nn;
// // // }
// // // struct Node* insert(int data,struct Node* head)
// // // {
// // // struct Node* nn=create(data);
// // // if(head==nullptr)
// // // head=nn;
// // // else
// // // {
// // // nn->next=head;
// // // head->prev=nn;
// // // head=nn;
// // // }
// // // return head;
// // // }
// // // struct Node* insertEnd(int data,struct Node* head)
// // // {
// // // struct Node* nn=create(data);
// // // if(head==nullptr)
// // // head=nn;
// // // else
// // // {
// // // struct Node*temp=head;
// // // while(temp->next!=nullptr){
// // //  temp=temp->next;
// // // }
// // // temp->next=nn;
// // // nn->prev=temp;
// // // }
// // // return head;
// // // }
// // //  void display(struct Node* head)
// // // {
// // // struct Node* temp=head;
// // // while(temp!=nullptr)
// // // {
// // // cout<<temp->data<<"-> ";
// // // temp=temp->next;
// // // }
// // // cout<<endl;
// // // }
// // // struct Node* deleteBegin(struct Node* head)
// // // {
// // // if(head==nullptr)
// // // cout<<"List is empty";
// // // else if(head->next==nullptr)
// // // {
// // // head=nullptr;
// // // }
// // // else
// // // {
// // // struct Node* temp=head;
// // // head=head->next;
// // // head->prev=nullptr;
// // // temp->next=nullptr;
// // // delete(temp);
// // // }
// // // return head;
// // // }
// // // struct Node* deleteEnd(struct Node* head){
// // // if(head == nullptr){
// // // cout<<"List is empty: ";
// // // }else if(head->next==nullptr)
// // // head=nullptr;
// // // else
// // // {
// // // struct Node* temp1= head;
// // // struct Node* temp2=nullptr;
// // // while(temp1->next!=nullptr)
// // // {
// // // temp2=temp1;
// // // temp1=temp1->next;
// // // }
// // // temp1 -> prev=nullptr;
// // // temp2->next=nullptr;

// // // delete (temp1);
// // // }

// // // return head;
// // // }
// // // int main(){
// // // struct Node* head=nullptr;
// // // head=insert(10,head);
// // // head=insert(20,head);
// // // head=insert(30,head);
// // // display(head);
// // // head=insertEnd(40,head);
// // // display(head);
// // // head=deleteBegin(head);
// // // display(head);
// // // head=deleteEnd(head);
// // // display(head);
// // // }

// // #include <iostream>
// // using namespace std;

// // struct StackNode {
// //     int data;
// //     StackNode* prev;
// //     StackNode* next;
// //     StackNode(int d) : data(d), prev(nullptr), next(nullptr) {}
// // };

// // StackNode* push(int data, StackNode* top) {
// //     StackNode* nn = new StackNode(data);
// //     if (top == nullptr) {
// //         top = nn;
// //     } else {
// //         nn->next = top;
// //         top->prev = nn;
// //         top = nn;
// //     }
// //     return top;
// // }

// // StackNode* pop(StackNode* top) {
// //     if (top == nullptr) {
// //         cout << "Stack is empty\n";
// //         return nullptr;
// //     }
// //     StackNode* temp = top;
// //     top = top->next;
// //     if (top)
// //         top->prev = nullptr;
// //     cout << "Popped: " << temp->data << endl;
// //     delete temp;
// //     return top;
// // }

// // void display(StackNode* top) {
// //     StackNode* temp = top;
// //     cout << "Stack (top to bottom): ";
// //     while (temp != nullptr) {
// //         cout << temp->data << " -> ";
// //         temp = temp->next;
// //     }
// //     cout << "NULL\n";
// // }

// // int main() {
// //     StackNode* top = nullptr;
// //     top = push(10, top);
// //     top = push(20, top);
// //     top = push(30, top);
// //     display(top);
// //     top = push(40, top);
// //     display(top);
// //     top = pop(top);
// //     display(top);
// //     top = pop(top);
// //     display(top);
// //     return 0;
// // }
// // STACK USING CLASS
// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
// int data;
// Node* next;
// };
// class Stack
// {
// public:
// Node* top=nullptr;
// void push(int data)
// {
// Node* nn=new Node();
// nn->data=data;
// nn->next=nullptr;
// if(top==nullptr)
// top=nn;
// else
// {
// nn->next=top;
// top=nn;
// }
// }
// void pop()
// {
// if(top==nullptr)
// cout<<"Stack Underflow. Can't delete"<<endl;
// else
// {
// Node* temp=top;
// top=top->next;
// int t=temp->data;
// delete(temp);
// cout<<"Node "<<t<<" deleted from stack"<<endl;
// }
// }
// void display()
// {
// Node* temp=top;
// while(temp!=nullptr)
// {
// cout<<temp->data<<"->";
// temp=temp->next;
// }
// cout<<endl;
// }
// };
// int main()
// {
// Stack s1;
// s1.push(10);
// s1.push(20);
// s1.push(30);
// s1.display();
// s1.pop();
// s1.display();
// } 
// STACK INPLEMENTATION USING ARRAY
// #include<bits/stdc++.h>
// using namespace std;
// class Stack
// {
//     public:

// int top=-1;
// int arr[50];
// void push(int data)
// {
// if(top==50)
// cout<<"Stack Overflow. Can't Insert"<<endl;
// else
// {
// arr[++top]=data;
// }
// }
// void pop()
// {
// if(top==-1)
// cout<<"Stack Underflow. Can't delete"<<endl;
// else
// top--;
// }
// void display()
// {
// for(int i=top;i>=0;i--)
// {
// cout<<arr[i]<<"->";
// }
// cout<<endl;
// }
// };
// int main()
// {
// int n;
// cin>>n;
// Stack s1;
// for(int i=0;i<n;i++)
// {
// int d;
// cin>>d;
// s1.push(d);
// }
// s1.display();
// s1.pop();
// s1.display();
// }


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to print the Next Smaller Element for each element using a monotonic stack
void nextSmallerElements(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st; // Monotonic increasing stack

    for (int i = n - 1; i >= 0; --i) {
        // Pop elements from stack while they are greater or equal to arr[i]
        while (!st.empty() && st.top() >= arr[i])
            st.pop();
        if (!st.empty())
            result[i] = st.top();
        st.push(arr[i]);
    }

    cout << "Next Smaller Elements: ";
    for (int i = 0; i < n; ++i)
        cout << result[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    nextSmallerElements(arr);

    return 0;
}


    
    
   // You are using GCC
#include<bits/stdc++.h>
using namespace std;
void process(int arr[],int n)
{
    stack<int> st;
    int res[n];
    for(int i=0;i<n;i++)
    res[i]=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty())
        {
             res[i]=-1;
             st.push(arr[i]);
        }
        else if(st.top()<arr[i])
        {
            while(!st.empty()&&st.top()<arr[i])
            st.pop();
            i++;
        }
        else
        {
            res[i]=st.top();
            st.push(arr[i]);
        }
       
    }
    cout<<"Next Greater Elements: ";
    for(int i=0;i<n;i++)
    cout<<res[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    process(arr,n);
} 