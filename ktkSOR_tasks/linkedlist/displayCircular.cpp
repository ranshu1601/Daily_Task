// Only function
/*

    void displayCLL(){
    Node *ptr;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=head);
    }

    Using Recursion 
    void displayCLL(Node *p){
        static int flag =0;
        if(p!=head || flag == 0){
            flag = 1;
            cout<<p->data<<" ";
            display(p->next);
        }
    }
*/
