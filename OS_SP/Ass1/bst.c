#include "bst.h"

#include <stdlib.h>
#include <stdio.h>



struct _Node
{
    int val;
    Node* l;
    Node* r;
};


Node* addNode(Node* root, int val)
{
    Node* node = (Node*)malloc(sizeof(Node)); //pre-allocating Node as it is used in all cases
    node->val = val;
    node->l = NULL;
    node->r = NULL;
    if(!root) //if root does not exists yet
    {
        return node;
    }

    Node* c = root; //current node when traversing
    Node* n = root; //next node when traversing
    int side = 0; //determines if inserting on the left or right

    while(n)
    {
        c = n;
        if(val == c->val)
        {
            free(node);
            return NULL;
        }
        if(val>c->val)
        {
            n = c->l;
            side = 0;
        }
        else
        {
            n = c->r;
            side = 1;
        }
    }

    if(side)
    {
        c->r = node;   
    }
    else
    {
        c->l = node;
    }

    return node;
}


Node* removeNode(Node* root, int val)
{
    if(!root)
    {
        return root;
    }
    //this function assumes that it is a BST
    if(root->val == val)
    {
        int r = root->r ? 1 : 0;
        int l = root->l ? 1 : 0;
        if(r + l ==  0) //is a leaf therefore no need to do much more
        {
            free(root);
            return NULL;
        }
        else if(r+l == 1) //has only one left or right child
        {
            if(r) //replace current node with respective child subtree and delete the subtree root
            {
                Node* r = root->r;
                free(root);
                return r;
            }
            else
            {
                Node* l = root->l;
                free(root);
                return l;
            }
        }
        else 
        {
            /*
            * Find the rightmost node in the leftsubtree (the next biggest node)
            * and replace this node with that node and then free the rightmost node;
            */
           Node* n = root->l;
           Node* p = root;
           while(n->r)
           {
                p = n;
                n = n->r;
           }
           root->val = n->val; //replacing the value for the node to be deleted with the next biggest val
           if(p == root) //extra check in case the node to be deleted is the direct parent of the next biggest node
           {
            p->l = n->l; //replacing the parent node's children to that of the next biggest node's only child
           }
           else
           {
            p->r = n->l;
           }
           free(n);
           return root;
        }
    }

    if(val > root->val)
    {
        Node* n = removeNode(root->l, val);
        root->l = n;
        return root;
    }
    else
    {
        Node* n = removeNode(root->r, val);
        root->r = n;
        return root;
    }
    return root;
}


void displaySubtree(Node* n)
{
    if(!n) return;
    if(n->r) displaySubtree(n->r);
    printf("%d\n", n->val);
    if(n->l) displaySubtree(n->l);
}

int numberLeaves(Node* n)
{
    if(!(n->r|| n->l))
    {
        return 1;
    }
    
    int leaf = 0;
    if(n->l)
    {
        leaf += numberLeaves(n->l);
    }
    if(n->r)
    {
        leaf += numberLeaves(n->r);
    }

    return leaf;
}

void freeSubtree(Node* root)
{
    if(!root) return;
    Node* l = root->l;
    Node* r = root->r;
    if(l) freeSubtree(l);
    free(root);
    if(r) freeSubtree(r);
}


Node* removeSubtree(Node* root, int val)
{
    if(!root) return NULL;    
    if(val > root->val)
    {
        Node* n = removeSubtree(root->l, val);
        root->l = n;
        return root;
    }
    else if(val < root->val)
    {
        Node* n = removeSubtree(root->r, val);
        root->r = n;
        return root;
    }
    else if(val == root->val)
    {
        freeSubtree(root);
        return NULL;
    }
    return NULL;
}

int nodeDepth(Node* root, Node* n)
{
    if(!n) return -1;
    Node* c = root;
    int d = 0;
    while(c && c != n)
    {
        if(n->val > c->val)
        {
            c = c->l;
            d++;
        }
        else if(n->val < c->val)
        {
            c = c->r;
            d++;
        }
    }
    if(c)
    {
        return d;
    }
    return -1;
}