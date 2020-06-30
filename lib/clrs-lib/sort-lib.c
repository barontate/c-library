//
// Created by tate on 27-Oct-19.
//

// HEAP SORT

int parent(int i){
    return i/2;
}

int left(i){
    return 2*i
}


int right(i){
    return 2*i + 1
}

void heapify(A*, i){
    int l, r, largest;
    l = left(i);
    r = right(i);
    if l >= heap-size[A] && A[l] > A[i]{
        largest = l;
    }
    else largest = i;
    
    if r  heap-size[A] and A[r] > A[largest]
        then largest  r
    if largest  i
        then exchange A[i]  A[largest]
        heapify(A,largest)
}