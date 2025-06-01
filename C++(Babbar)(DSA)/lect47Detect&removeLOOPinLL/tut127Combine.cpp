// code Link:- https://www.naukri.com/code360/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_codestudio_lovebabbar28thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_codestudio_lovebabbar28thjan&leftPanelTabValue=SUBMISSION

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return head;
    }
    Node* fast = head;
    Node* slow = head;
    while(slow!=NULL && fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
};

Node* getStart(Node*head){
    if(head == NULL){
        return NULL;
    }

    Node* fast = floydDetectLoop(head);
    if(fast == NULL){
        return NULL;
    }
    Node* slow = head;

    while(slow != fast){
        slow= slow->next;
        fast = fast -> next;
    }
    return slow ;

};
Node *removeLoop(Node *head)
{
    if(head ==NULL){
        return head;
    }

    Node* statOfLoop = getStart(head);
    if(statOfLoop ==NULL){
        return head;
    }
    Node* temp = statOfLoop;
    while (temp->next != statOfLoop)
    {
        temp =temp->next;
    }
    temp ->next = NULL;
    return head;
}