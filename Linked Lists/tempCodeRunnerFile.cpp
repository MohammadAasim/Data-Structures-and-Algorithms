bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    //rec case check at head ,remaining linked lisr
    if(head->data==key){
        return true;
    }else{
        return searchRecursive(head->next,key);
    }
}