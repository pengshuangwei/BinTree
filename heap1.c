/*�������ͣ���
���ݶ��󼯺ϣ���ȫ��������ÿ������Ԫ��Ϊ���/��Сֵ
������������H-MaxHeap,Ԫ��item-ElementType,
��Ҫ����
*/
typedef struct HeapStruct* MaxHeap;
struct HeapStruct {
	ElementType* Elements;//�洢��Ԫ�ص�����
	int size;//�ѵĵ�ǰԪ�ظ���
	int capacity;//�ѵ��������
};
typedef Heap Maxheap;
typedef Heap Minheap;
Maxheap Create(int Maxsize)//����һ���յ�����
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->Elements=(ElementType*)malloc((MaxSize+1)*(sizeof(struct HeapStruct)))
	H->size = 0;
	H->capacity = Maxsize;
	H->Elements[0] = MaxData;//�����ڱ�Ϊ���ڶ������п���Ԫ�ص�ֵ�������Ժ����
	return H;
}
Boolean IsFull(Maxheap H);//�ж������Ƿ�����
{
	return(H->Size == H->Capacity);
}
Insert(MaxHeap H, ElementType item);//��Ԫ��item���뵽����H��
{
	int i;
	if (IsFull(H)) {
		printf("����Ϊ��");
		return;
	}
	i = ++H->size;//iָ��������е����һ��Ԫ�ص�λ��
	for (; H->Elemengs[i / 2] < item; i /= 2)
		H->Elements[i] = H->Elements[i / 2];//���¹��˽��
	H->Elements[i] = item;//����
}
Booklean IsEmpty(Maxheap��H); �ж�����H�Ƿ�Ϊ��
{
	return (H->size == 0);
}
ElementType DeleteMax(MaxHeap H);//����H�����Ԫ��
{
	int parent, child;
	ElementType MaxItem, temp;
	if (IsEmpty(H)) {
		printf("���ѿ�");
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
//--------------��������_-------------
void PerDown(MaxHeap H, int P) {
	//���ˣ���H����H->Data[p]Ϊ�����Ӷѵ���Ϊ����
	int parent, child;
	ElementType x;
	x = H->Elements[p];/* ȡ��������ŵ�ֵ */
	for (parent = 0; parent * 2 <= H->size; parent = child) {
		child = parent * 2;
		if (child != H->size && H->Elements[child] < H->Elements[child + 1])
			child += 1; /* Childָ�������ӽ��Ľϴ��� */
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
{ /* ����H->Data[]�е�Ԫ�أ�ʹ�������ѵ�������  */
  /* �����������H->Size��Ԫ���Ѿ�����H->Data[]�� */

	int i;

	/* �����һ�����ĸ��ڵ㿪ʼ���������1 */
	for (i = H->Size / 2; i > 0; i--)
		PercDown(H, i);
}
