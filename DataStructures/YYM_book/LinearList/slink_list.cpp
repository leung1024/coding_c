


int LocateElem_SL(SLinkList S, ElemType e) {
    int i = S[0].cur;
    while (i && s[i].cur != e) i = S[i].cur; // 找出要查询的e的游标
    return i;
}


