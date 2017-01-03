#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"
#include "link_list.h"

Status IinitList_Sq(SqList &L) {
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (! L.elem) exit(OVERFLOW);
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}

//插入
Status ListInsert_Sq(SqList &L, int i, ElemType e) {
    if(i < 1||i > L.length + 1) return ERROR;
    if(L.length >= L.listsize) {
        newbase = (ElemType * )realloc(L.elem,
                        (L.listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase) exit(OVERFLOW);
        L.elem = newbase;
        L.listsize += LISTINCREMENT;
    }

    q = &(L.elem[i - 1]);
    for(p = &(L.elem[L.length - 1]); p >= q; --p) *(p + 1) = *p;

    *q = e;
    ++L.length;
    return OK;
}

//删除
Status ListDelete_Sq(SqList &L, int i, ElemType e) {
    if(i < 1|| i > L.length + 1) return ERROR;
    p = &(L.elem[i - 1]);
    e = *p;
    q = L.elem[L.length - 1];
    for(++p; p <= q ; ++p) *(p - 1) = *p;
    --L.length;
    return OK;

}

//查找
int LocateElem_Sq(SqList L, ElemType e,
                    Status (*compare)(ElemType, ElemType)){
    i = 1;          //i的初值为第一个元素
    p = L.elem;
    while(!i <= L.length && !(*compare)(*p++, e)) ++i;
    if(i <= L.length) return i;
    else return 0;
}
















