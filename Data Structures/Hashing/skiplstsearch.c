/* Implementation of Skip List
Example:
Enter array size
5
Enter 5 key and value pairs
1 500
2 560
4 450
3 520
5 600
Insert:--------------------
1[500]->2[560]->3[520]->4[450]->5[600]->NIL
Search:--------------------
Enter size of search keys
2
Enter search keys
3 4
key = 3, value = 520
key = 4, value = 450
Delete and Display:--------------------
1[500]->2[560]->4[450]->5[600]->NIL

*/


#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define SKIPLIST_MAX_LEVEL 6
typedef struct snode {
    int key;
    int value;
    struct snode **forward;
} snode;

typedef struct skiplist {
    int level;
    struct snode *header;
} skiplist;

 skiplist *skiplist_init(skiplist *list) {
    int i;
    snode *header = (snode *) malloc(sizeof(struct snode));
    list->header = header;
    header->key = INT_MAX;
    header->forward = (snode **) malloc(
            sizeof(snode*) * (SKIPLIST_MAX_LEVEL + 1));
    for (i = 0; i <= SKIPLIST_MAX_LEVEL; i++) {
        header->forward[i] = list->header;
    }
     list->level = 1;
     return list;
}
static int rand_level() {
    int level = 1;
    while (rand() < RAND_MAX / 2 && level < SKIPLIST_MAX_LEVEL)
        level++;
    return level;
}
 int skiplist_insert(skiplist *list, int key, int value) {
    snode *update[SKIPLIST_MAX_LEVEL + 1];
    snode *x = list->header;
    int i, level;
    for (i = list->level; i >= 0; i--) {
        while (x->forward[i]->key < key)
            x = x->forward[i];
        update[i] = x;
    }
    x = x->forward[0];

    if (key == x->key) {
        x->value = value;
        return 0;
    } else {
        level = rand_level();
        if (level > list->level) {
            for (i = list->level + 1; i <= level; i++) {
                update[i] = list->header;
            }
            list->level = level;
        }
        x = (snode *) malloc(sizeof(snode));
        x->key = key;
        x->value = value;
        x->forward = (snode **) malloc(sizeof(snode) * (level + 1));
        for (i = 0; i <= level; i++) {
            x->forward[i] = update[i]->forward[i];
            update[i]->forward[i] = x;
        }
    }
    return 0;
}
snode *skiplist_search(skiplist *list, int key)
{
    snode *x=list->header;
    int i;
    for(i=list->level;i>=0;i--)
    {
        while(x->forward[i]->key < key)
        {
            x=x->forward[i];
        }
    }
    if(x->forward[0]->key==key)
    {
        return x->forward[0];
    }
    else
    {
        return NULL;
    }
}
 static void skiplist_node_free(snode *x) {
    if (x) {
        free(x->forward);
        free(x);
    }
}
int skiplist_delete(skiplist *list, int key) {
    int i;
    snode *update[SKIPLIST_MAX_LEVEL + 1];
    snode *x = list->header;
    for (i = list->level; i >= 0; i--) {
        while (x->forward[i]->key < key)
            x = x->forward[i];
        update[i] = x;
    }
     x = x->forward[0];
    if (x->key == key)
    {
        for (i = 0; i <= list->level; i++)
        {
            if (update[i]->forward[i] != x)
                break;
            update[i]->forward[0] = x->forward[i];
        }
        skiplist_node_free(x);

        while (list->level > 1 && list->header->forward[list->level]
                == list->header)
            list->level--;
        return 0;
    }
    return 1;
}
 static void skiplist_display(skiplist *list) {
    snode *x = list->header;
    while (x && x->forward[0] != list->header) {
        printf("%d[%d]->", x->forward[0]->key, x->forward[0]->value);
        x = x->forward[0];
    }
    printf("NIL\n");
}
 int main() {
    int i,j,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];
printf("Enter %d key and value pairs\n",n);
    for(j=0;j<n;j++){
    	scanf("%d%d",&arr1[j],&arr2[j]);
	}
    skiplist list;
    skiplist_init(&list);
     printf("Insert:--------------------\n");
    for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        skiplist_insert(&list, arr1[i], arr2[i]);
    }
    skiplist_display(&list);
     printf("Search:--------------------\n");
    int m,k;
    printf("Enter size of search keys\n");
    scanf("%d",&m);
    int keys[m];
    printf("Enter search keys\n");
    for(k=0;k<m;k++){
    	scanf("%d",&keys[k]);
	}
     for (i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        snode *x = skiplist_search(&list, keys[i]);
        if (x) {
            printf("key = %d, value = %d\n", keys[i], x->value);
        } else {
            printf("key = %d, not found\n", keys[i]);
        }
    }
     printf("Delete and Display:--------------------\n");
    skiplist_delete(&list, 3);
    skiplist_display(&list);
   return 0;
}


