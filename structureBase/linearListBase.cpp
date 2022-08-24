//
// Created by AdminYu on 2022/8/24.
//

#include "../structure/linearList.cpp"

bool LinearListInsert(SqList &L, int i, int e);

int LinearListBase(){
    SqList sq_list={{1,2,3,4,5,6},6};
    LinearListInsert(sq_list, 7, 7);
    for (int i = 0; i < sq_list.length; ++i) {
        printf("%d ",sq_list.data[i]);
    }
    return 0;
}

