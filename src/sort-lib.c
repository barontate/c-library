//
// Created by tate on 27-Oct-19.
//

// HEAP SORT

int parent(int i){
    return i/2;
}

int left(int i){
    return 2*i;
}


int right(int i){
    return 2*i + 1;
}
/*

void swap(A*, i1, i2){
    
}

void heapify(A*, i){
    int l, r, largest;
    l = left(i);
    r = right(i);
    size_t n = sizeof(a) / sizeof(int);


    if l >= heap-size[A] && A[l] > A[i]{
        largest = l;
    }
    else largest = i;
    
    if r <= n && A[r] > A[largest]{
        largets = r;
    }
        
    if largest != i {

    }
        then exchange A[i]  A[largest]
        heapify(A,largest)
}*/
