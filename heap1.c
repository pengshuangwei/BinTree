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
Maxheap Create(int Maxsize)//����һ���յ�����
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->size = 0;
	H->capacity = Maxsize;
	H->Elements[0] = MaxData;//�����ڱ�Ϊ���ڶ������п���Ԫ�ص�ֵ�������Ժ����
	return H;
}
Boolean IsFull(Maxheap H);//�ж������Ƿ�����
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
