//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}


Node *addNode(Node *head, int data)
{
    if(head==NULL)
    head=newNode(data);
    else
    {
        Node * temp=head;
        Node * prev=head;
        while(temp->next)
            {
                prev=temp;
                temp=temp->next;
                
            }
        temp->next=newNode(data);
        prev=temp;
        temp=temp->next;
        temp->prev=prev;
    }
    
    return head;
}


void displayList(Node *head)
{
    //Head to Tail
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
    
    //Tail to Head
    
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data;
    
   
    
    
}



 // } Driver Code Ends
//User function Template for C++


/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
void sumUpdate(Node *head)
{
    //Your code here
    int sm = 0;
    sm += head->data;
    Node *q = head->next;
    while(q != head)
    {
        sm += q->data;
        q = q->next;
    }
    
    q = head;
    while(true)
    {
        int sm1 = sm-q->data;
        q->data = sm1;
        q = q->next;
        if(q == head)
          break;
    }
    return;
}

// { Driver Code Starts.




void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    
    temp->next=head;
    head->prev=temp;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        head=addNode(head,x);
	    }
	    
	    
	    makeCircular(head);
	    
	    sumUpdate(head);
	    displayList(head);
 
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
