#define MAXN 1000 //����������
typedef int ElementType;//Ĭ��Ԫ�ؿ����÷Ǹ�����ʾ-�ѵĸ���
typedef int SetName //Ĭ���ø������±���Ϊ��������
typedef ElementType SetType[MAXN]//���輯��Ԫ���±��0��ʼ
void Union(SetType S, SetName Root1, SetName Root2)
{
    /* ����Ĭ��Root1��Root2�ǲ�ͬ���ϵĸ���� */
    /* ��֤С���ϲ���󼯺� */
    if (S[Root2] < S[Root1]) {
        //����2�Ƚϴ�
        S[Root2] += S[Root1];
        S[Root2] = Root1;
    }
    else {
        S[Root1] += S[Root2];
        S[Root2] = Root1;
    }
}
SetName(SetType S, ElementType x)
{/* Ĭ�ϼ���Ԫ��ȫ����ʼ��Ϊ-1 */
    if (S[x] < 0)/* �ҵ����ϵĸ�,,���ڵ�洢���Ƕѵø�����
                 �ø�����ʾ���������洢���ٽ������±�*/
        return x;
    else
        return S[x] = Find(S, S[x]);/*·��ѹ��*/
}