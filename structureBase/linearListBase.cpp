//
// Created by AdminYu on 2022/8/24.
//

#include "../structure/linearList.cpp"
int printfLog(char *s,SqList sq_list);
int LinearListInsert(SqList &L, int i, int e);
int LinearListDelete(SqList &L, int i);
int LinearListChange(SqList &L, int i,int e);
int LinearListFindIndex(SqList &L, int e);

int LinearListBase(){
    SqList sq_list={{1,2,3,4,5,6},6};
    LinearListInsert(sq_list, 6, 7);
    printfLog("Insert ",sq_list);
    LinearListDelete(sq_list, 6);
    printfLog("Delete ",sq_list);
    LinearListChange(sq_list, 6,7);
    printfLog("Change ",sq_list);
    int ElemIndex=LinearListFindIndex(sq_list, 6);
    printf("Find e index is %d",ElemIndex);
    return 0;
}
int printfLog(char *s,SqList sq_list){
    printf("%s sq_list:",s);
    for (int i = 0; i < sq_list.length; i++) {
        printf("%d ",sq_list.data[i]);
    }
    printf("\n");
    return 1;
}
int LinearListInsert(SqList &L, int i, int e){
    if (i<1 || i>L.length+1)
        return 0;
    if (L.length>=MaxSize)
        return 0;
    for (int j = L.length; j >=i ; j--) {
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return 1;
}
int LinearListDelete(SqList &L, int i){
    if (i<1 || i>L.length)
        return 0;
    int e=L.data[i-1];
    for (int j = i; j <=L.length ; j++) {
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return e;
}
int LinearListChange(SqList &L, int i,int e){
    if (i<1 || i>L.length)
        return 0;
    L.data[i-1]=e;
    return 1;
}
int LinearListFindIndex(SqList &L, int e){
    for (int i = 0; i <L.length ; ++i) {
        if (L.data[i-1]==e)
            return i;
    }
    return 1;
}

