//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node * reverse(Node * head){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=nullptr;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev= curr;
            curr=next;
        }
        
        return prev;
    }
     
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        
        struct Node *ans = new struct Node(-1);
        struct Node *curr = ans;
        int carry = 0;
        
        while(first && second){
            int sum = first->data + second->data + carry;
            carry = sum/10;
            struct Node *temp = new struct Node(sum%10);
            curr->next = temp;
            curr = temp;
            first = first->next;
            second = second->next;
        }
        
        while(first){
            int sum = first->data + carry;
            carry = sum/10;
            struct Node *temp = new struct Node(sum%10);
            curr->next = temp;
            curr = temp;
            first = first->next;
        }
        
        while(second){
            int sum = second->data + carry;
            carry = sum/10;
            struct Node *temp = new struct Node(sum%10);
            curr->next = temp;
            curr = temp;
            second = second->next;
        }
        
        if(carry){
            struct Node *temp = new struct Node(carry);
            curr->next = temp;
            curr = temp;
        }
        
        return reverse(ans->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends