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
typedef Heap Maxheap;
typedef Heap Minheap;
Maxheap Create(int Maxsize)//创建一个空的最大堆
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->Elements=(ElementType*)malloc((MaxSize+1)*(sizeof(struct HeapStruct)))
	H->size = 0;
	H->capacity = Maxsize;
	H->Elements[0] = MaxData;//定义哨兵为大于堆中所有可能元素的值，便于以后操作
	return H;
}
Boolean IsFull(Maxheap H);//判断最大堆是否已满
{
	return(H->Size == H->Capacity);
}
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
{
	return (H->size == 0);
}
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
//--------------建造最大堆_-------------
void PerDown(MaxHeap H, int P) {
	//下滤：将H中以H->Data[p]为根的子堆调整为最大堆
	int parent, child;
	ElementType x;
	x = H->Elements[p];/* 取出根结点存放的值 */
	for (parent = 0; parent * 2 <= H->size; parent = child) {
		child = parent * 2;
		if (child != H->size && H->Elements[child] < H->Elements[child + 1])
			child += 1; /* Child指向左右子结点的较大者 */
		if (x >= H->Elements[parent]) {
			break;
		}
		else {
			H->Elements[parent] = H->Elements[child];
		}
		H->Elements[parent] = x;
	}
}
void BuildHeap(MaxHeap H)
{ /* 调整H->Data[]中的元素，使满足最大堆的有序性  */
  /* 这里假设所有H->Size个元素已经存在H->Data[]中 */

	int i;

	/* 从最后一个结点的父节点开始，到根结点1 */
	for (i = H->Size / 2; i > 0; i--)
		PercDown(H, i);
}
