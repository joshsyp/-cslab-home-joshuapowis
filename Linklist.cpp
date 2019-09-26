#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include <sstream>
#include "node. h"

using namespace std;

template<typename T>
void Clear(node<T>*&root)
{
    node <T> * tmp;
    while (root !=NULL)
{
    tmp=root;
    root=root->GetLink();
    delete tmp;
    tmp=NULL;
}
}

//put in node.h file

template <class T>
class LinkedList 
{
    node<T> *head;
    int size;
    public:
    LinkedList(): head(NULL), size(0){}
    LinkedList (const LinkedList<T>&obj)
    {
        size=obj size;
        head=Copy(obj.head);
    }
    LinkedList<T> & operator=(const LinkedList<T>&rhs)
    {
        if (this != & rhs)
        {
            size=rhs.size;
            Clear(head);
        }
    }    
return *this;
}
    ~LinkedList()
    {
        Clear(head);
    }
// put in node.h file

//
void InsertInFront(const T& data)
{
    if (head == NULL)
    {
        head = new node <T> (data);

    }
    else
    {
        node<T> * tmp=new node <T> (data);
        tmp->SetLink(head);
        head=tmp;

    }
    size +1;

}
//

// 
void InsertInBack(const T& data)
{
    if (head==NULL)
    {
        head = new node<T>(data);
    }
    else
    {
        node<T> * tmp=head;
        while (tmp->GetLink() !=NULL)
        {
            tmp=tmp->GetLink();
        }
        tmp->SetLink(new node<T>(dta));

    }
    size +=1;
}

//

//
void InsertBefore(const T& value, const T& data)
{
    if (head != NULL)
    {
        if head->GetData()==value)
        {
            InsertInFront (data);
        }
    }
    else
    {
        node <T> * tmp =head;
    while (tmp->GetData() !=NULL && tmp ->GetData() !=value)
    {
        tmp = tmp ->GetLink();
    }
    if (tmp -> GetLink() != NULL)
    {
        node<T> * nwdata= new node<T>(data);
        nwdata -> SetLink(tmp-> GetLink());
        tmp->SetLink(nwdata);
        size +=1;
    }
    }
    }
}
//

//
void InsertAfter(const T& value, const T& data)
{
    if (head != NULL)
    {
        node<T> * tmp=head;
        while (tmp != NULL && tmp ->GetData() !=value)
        {
            tmp=tmp->GetLink();
        }
        if (tmp != NULL)
        {
            node<T> * nwdata=node<T>(data);
            nwdata->SetLink(tmp->GetLink());
            tmp->SetLink(nwdata);
            size +=1;
        }

    }
}
//
void RemoveFromBack()
{
    if(head!=NULL)
    {
        if(head->getLink()== NULL)
        {
            delete head;
            head NULL;
        }
        else
        {
            node<T>* tmp = head;
            while(tmp-> GetLink()!=NULL)
            {
                tmp = tmp->GetLink();
            }
            node <T> * oldData = tmp->GetData();
            tmp->SetLink(NULL)
            delete oldData;
            oldData = NULL;
        }
        size =1;
    }
}
//

//
		void Remove(const T& value)
		{
			if(head != NULL)
			{
				if(head->GetData() == value)
				{
					RemoveFromFront();
				}
				else
				{
					Node<T>* tmp = head;

					while(tmp->GetLink() != NULL && tmp->GetLink()->GetData() != value)
					{
						tmp = tmp->GetLink();
					}
					
					if(tmp->GetLink() != NULL)
					{
						Node<T>* oldData = tmp->GetLink();
						tmp->SetLink(oldData->GetLink());
						delete oldData;
						oldData;
						size -= 1;
					}
				}
			}
		}


//

//
bool ItsEmpty() const
{
    return head ==NULL;
}

int Length () const
{
    return size;
}
//
const T& operator[](int index)
{
    if (index >= 0 && index <  size)
    {
        node<T> * tmp =head;

        for (i=0,i < index; i+=1)
        {
            tmp = tmp -> GetLink();
        }
        return tmp -> GetData();
    }
    throw "out of Bound";
}


//






template<typename T>
node<T> * Copy(node<T> * root)
{
    if (root==NULL)
    {
        return NULL;
    }
    else
    {
        node<T> * root2 =new node<T> (root->GetData());
        node<T> * tmp1=root->GetLink();
        node<T> * tmp2=root2;

        while (tmp !=NULL)
    {
        tmp2->SetLink (new node<T>(tmp1->GetData()));
        tmp1=tmp1->GetLink();
        tmp2=tmp2->GetLink();

    }
}

return root2;
}