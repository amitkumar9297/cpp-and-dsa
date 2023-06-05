#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int a_num=20;
    int *a_num_ptr=new int();       // allocate memory in heap
    *a_num_ptr=20;

    delete(a_num_ptr);              // dealocate memory from heap
    
    // but the pointer point the memory address in heap that's known as  DANGLING POINTER

    a_num_ptr=new int[4];       // allocate the memory for array

    delete[]a_num_ptr;          // deallocate the array
    a_num_ptr=NULL;             // delete the pointer from stack

    return 0;


}