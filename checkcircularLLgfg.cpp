/* Link list Node
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

/* Should return true if linked list is circular, else false */
class Solution
{
public:
    bool isCircular(Node *head)
    {

        if (!head)
            return true;
        Node *temp = head->next;

        while (temp != NULL && temp != head)
        {
            temp = temp->next;
        }
        if (temp == head)
        {
            return true;
        }
        else
        {

            return false;
        }
    }
};
