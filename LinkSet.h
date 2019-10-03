#ifndef LINKEDSET_H
#define LINKEDSET_H

#include <iostream>
#include <string>
#include <sstream>
#include "Node.h"

namespace ds
{
	template <class T>
	class LinkedSet
	{
	private:
		Node<T>* head;
		int size;
	public:
		LinkedSet() : size(0), head(NULL) {}

		LinkedSet(const LinkedSet<T>& obj)
		{
			size = obj.size;
			head = Copy(obj.head);
		}

		LinkedSet& operator=(const LinkedSet<T>& rhs)
		{
			if(this != &rhs)
			{
				size = rhs.size;
				Clear(head);
				head = Copy(rhs.head);
			}

			return *this;	
		}

		~LinkedSet() 
		{
			Clear(head);
			head = NULL;
		}

		bool Contains(const T& value) const 
		{
			for(Node<T>* tmp = head;tmp != NULL;tmp = tmp->GetLink())
			{
				if(value == tmp->GetData())
				{ 
					return true;
				}
			}
			return false;
		}

int cardinality() const
    {
        return size;
    }
bool IsEmpty() const
{
    return(head==NULL);
}

bool contain(const T&value)
{
    for(Node<T>*tmp=head; tmp!=NULL;tmp=tmp->GetLink())
    {
        if (tmp->GetData()==value)
        {
            return true;
        }
    }
    return false;
}

void Add(const T& value)
{
    if (!contain(value))
    {
        Node<T>* tmp= new Node<T>(value);
        tmp->SetLink(head);
        head=tmp;
        size+=1;
    }
}

void Remove(const T& value)
{
    if (head != NULL)
    {
        if (head -> GetData()==value)
        {
            Node<T>* tmp = head;
            head= head -> GetLink();
            delete tmp;
            tmp = NULL;
            size -=1;
        }
        else
        {
            Node<T>* tmp = head;
            while (tmp->GetLink() != NULL && tmp ->GetLink() ->GetData() !=value)
            {
                tmp = tmp-> GetLink();
            }

            if (tmp-> GetLink() != NULL)
            {
                Node<T> data = tmp -> GetLink();
                tmp->SetLink(data->GetLink());
                delete[] data;
                data = NULL;
                size-=1;
            }
        }
    }
}



		std::string ToString() const
		{
			std::stringstream out;
			out << "{";

			for(Node<T>* tmp = head;tmp != NULL;tmp = tmp->GetLink())
			{
				
				if(tmp->GetLink() != NULL)
				{
					out << ",";
				}
			}
			out << "}";
			return out.str();
		}

		friend std::ostream& operator<<(std::ostream& out,const LinkedSet<T>& obj)
		{
			out << obj.ToString();
			return out;
		}
	};
}
		
#endif


