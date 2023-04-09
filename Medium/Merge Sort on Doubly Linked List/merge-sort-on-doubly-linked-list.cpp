//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


//Function to sort the given doubly linked list using Merge Sort.
struct Node *sortDoubly(struct Node *head)
{
	// Your code here
	vector<int> v;
    Node *temp = head;
    while(temp !=NULL)
    {
        int val = temp->data;
        v.push_back(val);
        temp = temp->next;
    }
    
    sort(v.begin(), v.end());
    temp = head;
    int i = 0;
    while(temp != NULL)
    {
        temp->data = v[i];
        i++;
        temp = temp->next;
    }
    
    return head;
}


//{ Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

// } Driver Code Ends