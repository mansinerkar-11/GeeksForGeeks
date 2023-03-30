#include <iostream>
#include<vector>
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

// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
          void reorderList(Node* head)
{

        Node*temp=head;

        vector<int>res;

        while(temp){

            res.push_back(temp->data);

            temp=temp->next;

        }

        int n=res.size();

        if(n<=2){

            return;

        }

        vector<int>nodes(n);

        int idx=0,i=0;

        while(idx<n){

            nodes[idx]=res[i];

            idx+=2;

            i++;

        }

        i=n-1;

        idx=1;

        while(idx<n){

            nodes[idx]=res[i];

            idx+=2;

            i--;

        }

        Node*p=head;

        i=0;

        while(i<n){

            p->data=nodes[i];

            p=p->next;

            i++;

        }

        

    }

};

 

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int n, m, i, x;
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    
    return 0;
}

// } Driver Code Ends