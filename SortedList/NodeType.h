#ifndef NODETYPE_H_INCLUDED
#define NODETYPE_H_INCLUDED

template<class ItemType>
class NodeType
{
public:
	NodeType();
	NodeType(ItemType data);
	~NodeType();

	void SetData(ItemType data);
	ItemType GetData();
	void SetNext(NodeType* next);
	NodeType<ItemType>* GetNext();

private:
	ItemType data;
	NodeType<ItemType>* next;
};

#endif // SORTEDTYPE_H_INCLUDED
