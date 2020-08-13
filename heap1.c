/*数据类型：堆
数据对象集合：完全二叉树，每个结点的元素为最大/最小值
操作集：最大堆H-MaxHeap,元素item-ElementType,
主要操作
*/
typedef struct HeapStruct* MaxHeap;
struct HeapStruct {
	ElementType* Elements;//存储堆元素的数组
	int size;//堆的当前元素个数
	int capacity;//堆得最大容量
};
Maxheap Create(int Maxsize)//创建一个空的最大堆
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->size = 0;
	H->capacity = Maxsize;
	H->Elements[0] = MaxData;//定义哨兵为大于堆中所有可能元素的值，便于以后操作
	return H;
}
Boolean IsFull(Maxheap H);//判断最大堆是否已满
Insert(MaxHeap H, ElementType item);//将元素item插入到最大堆H中
{
	int i;
	if (IsFull(H)) {
		printf("最大堆为空");
		return;
	}
	i = ++H->size;//i指向插入后堆中的最后一个元素的位置
	for (; H->Elemengs[i / 2] < item; i /= 2)
		H->Elements[i] = H->Elements[i / 2];//向下过滤结点
	H->Elements[i] = item;//插入
}
Booklean IsEmpty(Maxheap，H); 判断最大堆H是否为空
ElementType DeleteMax(MaxHeap H);//返回H中最大元素
{
	int parent, child;
	ElementType MaxItem, temp;
	if (IsEmpty(H)) {
		printf("最大堆空");
		return;
	}
	MaxItem = H->Elements[1];
	temp = H->Elements[H->size--];
	for (parent = 1; parent * 2 <= H->size; parent = child) {
		child = parent * 2;
		if (child != H->size) &&
			(H->Elements[child] < H->elements[child + 1]);
		child++;
		else
			H->Elements[parent] = H->elemments[child];
	}
	H->Elements[parent] = temp;
	return MAxItem;
} 
