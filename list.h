class List;
class Node{
    int data;
public:
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
    int getData(){
        return data;
    }
    friend class List;
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void pushfront(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void pushback(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head = tail = n;
        }
        else{
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insertbw(int data, int p){
        if(head==NULL){
            pushfront(data);
        }
        else{
            Node* temp = head;
            while(p>=1){
                temp = temp->next;
                p--;
            }
            Node* n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }
    int searchlinear(int data){
        Node* temp = head;
        int i=0;
        while(temp!=NULL){
            if(temp->data==data){
                return i;
            }
            i++;
            temp = temp->next;
        }
        return -1;
    }
    Node* nodehead(){
        return head;
    }
};
