//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// class Solution{
//     //Function to reverse linked list
//     Node* reverseFromMiddle(Node* &head){
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* next = curr->next;
//         while(curr != NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//         // if(head == NULL){
//         //     return;
//         // }
//         if(head->next == NULL){
//             return true;
//         }
        
//         Node* slow = head;
//         Node* fast = head;
        
//         while(fast != NULL){
//             fast = fast->next;
//             if(fast != NULL){
//                 fast = fast->next;
//                 slow = slow->next;
//             }
//         }
//         //Slow will be the middle Node
        
//         //Reverse linked list from middle
//         Node* rev = reverseFromMiddle(slow->next);
        
//         slow->next = rev;
        
//         Node* tmp1 = head;
//         Node* tmp2 = rev;
        
//         while(tmp2){
//             if(tmp1->data != tmp2->data){
//                 //Not palindrom
//                 return false;
//             }
//             else{
//                 tmp1 = tmp1->next;
//                 tmp2 = tmp2->next;
//             }
//         }
//         return true;
//     }
// };

class Solution{
  private:
  
    int getlen(Node *head){
        int i=0;
        while(head!=NULL){
          head=head->next;
          i++;
        }
        return i;
    }
    Node * reverse (Node *head){
        Node*prev=NULL;
        Node*forward=NULL;
        while(head!=NULL){
            forward=head->next;
            head->next=prev;
            prev=head;
            head=forward;
        }
        return prev;
    }
  
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        int n=getlen(head);
        if(n==1){
            return true;
        }
        int mid=n/2;  
        
       
        Node *head1=head;
        Node *last=NULL;
        int i=0;
        while(i<mid){
            last=head1;
            head1=head1->next;
            i++;
        }
        last->next=NULL;
        if(n%2!=0){
           head1=head1->next; 
        }
        head1=reverse(head1);
        while(head1!=NULL){
            if(head->data!=head1->data){
                return false;
            }
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends