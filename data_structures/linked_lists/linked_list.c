struct node {
    int val;
    struct node *next;
};

void append(struct node *head, int val) {
    struct node *temp = malloc(sizeof(struct node));
    while (head->next) {
        head = head->next;
    }
    temp->next = NULL;
    temp->val = val;

    head->next = temp;

}

void print(struct node *head) {
    while (head) {
        printf("%d\n", head->val);
        head = head->next;
    }

}

struct node *build_list(int val) {
    struct node *head = malloc(sizeof(struct node));
    head->next = NULL;
    head->val = val;
    return head;
}

bool search(struct node *head, int val) {
    while (head->next) {
        if (head->val == val) {
            return true;
        }
        head = head->next;
    }
    return false;
}

void delete_node(struct node *head, int val) {
    while (head->next && head->next->val != val) {
        head = head->next;
    }
    struct node *temp = head->next;
    head->next = head->next->next;
    free(temp);
}

int main(void) {
    struct node *head = build_list(20);
    append(head, 30);
    append(head, 40);
    append(head, 50);
    delete_node(head, 40);
    print(head);
    return 0;
}
