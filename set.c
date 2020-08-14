#define MAXN 1000 //集合最大个数
typedef int ElementType;//默认元素可以用非负数表示-堆的个数
typedef int SetName //默认用根结点的下标作为集合名称
typedef ElementType SetType[MAXN]//假设集合元素下标从0开始
void Union(SetType S, SetName Root1, SetName Root2)
{
    /* 这里默认Root1和Root2是不同集合的根结点 */
    /* 保证小集合并入大集合 */
    if (S[Root2] < S[Root1]) {
        //集合2比较大
        S[Root2] += S[Root1];
        S[Root2] = Root1;
    }
    else {
        S[Root1] += S[Root2];
        S[Root2] = Root1;
    }
}
SetName(SetType S, ElementType x)
{/* 默认集合元素全部初始化为-1 */
    if (S[x] < 0)/* 找到集合的根,,根节点存储的是堆得个数，
                 用负数表示，其他结点存储的临近结点的下标*/
        return x;
    else
        return S[x] = Find(S, S[x]);/*路径压缩*/
}