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
    Node* nodehead(){
        return head;
    }
};
