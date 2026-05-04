#include <stdio.h>

struct node {
    int data;
    struct node* link;
};

int main() {
    struct node n1, n2;

    n1.data = 10;
    n2.data = 20;

    n1.link = &n2;

    printf("%d", n1.link->data);

    return 0;
}
