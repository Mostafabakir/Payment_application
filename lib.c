void createEmptyList(ST_list_t* list)
{
    list->head = NULL;
    list->size = 0;
}
// add node to the end
int insertToListend(ST_list_t* list, int data)
{

    ST_listNode_t* newnode = malloc(sizeof(*newnode));
    ST_listNode_t* last = list->head;
    newnode->data = data;
    newnode->next = NULL;
    if (list->head == NULL) { list->head = newnode; list->size++; return; }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newnode;
    list->size++;
    return;
}

// add node to the nth position
int insertToList(ST_list_t* list, int position, int data)
{
    ST_listNode_t* newnode = malloc(sizeof(*newnode));
    newnode->data = data;
    newnode->next = NULL;
    if (position<0 || position > list->size)
    {
        printf("Invalid position to insert \n");
    }
    else if (position == 0)
    {
        newnode->next = list->head;
        list->size++;
    }
    else
    {
        ST_listNode_t* temp = list->head;
        while (--position)
            temp = temp->next;
        newnode->next = temp->next;
        temp->next = newnode;
        list->size++;
    }
}

int printList(ST_list_t* list)
{
    ST_listNode_t* last = list->head;

    while (last->next != NULL)
    {
        printf("%d \n", last->data);
        last = last->next;
    }
    printf("%d \n", last->data);
}

int deleteFromList(ST_list_t* list, int position)
{
    ST_listNode_t* temp = list->head;
    ST_listNode_t* previous = NULL;



    // not valid
    if (position < 1 || position > list->size)
    {
        printf("Enter valid position\n");
        return;
    }

    // delete the first node
    if (position == 1)
    {
        // move head to next node
        list->head = (list->head)->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        list->size--;
        return;
    }

    // traverse to the nth node
    while (--position)
    {
        // store previous link node as we need to change its next val
        previous = temp;
        temp = temp->next;
    }
    // change previous node's next node to nth node's next node
    previous->next = temp->next;
    printf("Deleted: %d\n", temp->data);

    // delete this nth node
    free(temp);
    list->size--;
}

int getNodeData(ST_list_t* list, int nodeNumber)
{
    ST_listNode_t* current = list->head;

    // the index of the
    // node we're currently
    // looking at
    int count = 0;
    while (current != NULL) {
        if (count == nodeNumber)
        {

            return (current->data);
        }
        count++;
        current = current->next;
    }

    /* if we get to this line,
       the caller was asking
       for a non-existent element
       so we assert fail */
       // assert(0);
    return 0;
}
