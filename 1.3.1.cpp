#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Student 
{
    int code;
    char *name;
};

struct Node 
{
    Student *data;
    Node *pNext;
};

struct SingleList
{
    Node *pHead;
};

void Initialize (SingleList *&List)
{
    List = new SingleList;
    List->pHead = NULL;
}

// t?o m?t sinh viên
Student *input ()
{
    Student *sv = new Student;
    cout<<"input code :";
    cin>>sv->code;
    cout<<"input name :";
    cin.ignore();
    gets(sv->name);
    return sv;
}

Node *CreateNode(Student *sv)
{
    Node *pNode = new Node;
    if (pNode != NULL)
    {
        pNode->data = sv;
        pNode->pNext = NULL;
    }
    else
    {
        cout<<"Error";
    }
    return pNode;
}

void InsertLast(SingleList *&List, Student *sv)
{
    Node *pNode = CreateNode(sv);
    if (List->pHead= NULL)
    {
        List->pHead = pNode;
    }
    else
    {
        Node *ptm = List->pHead;
        while (ptm->pNext != NULL)
        {
            ptm = ptm->pNext;
        }
        ptm->pNext = pNode;
    }
}

void PrintNode(SingleList *List)
{
    Node *ptm = List->pHead;
    if (ptm == NULL)
    {
        cout<<"ERROR";
        return ;
    }
    while (ptm != NULL)
    {
        Student *sv = ptm->data;
        cout<<sv->code<<"\t"<<sv->name<<endl;
        ptm = ptm->pNext;
    }
}

int main ()
{
    SingleList *List;
    Initialize(List);
    Student *a= input();
    InsertLast(List,a);
    PrintNode(List);
    return 0;
}
