/*
    STL stands for STANDARD TEMPLATE LIBRARY
    > It is a library of generic classes and functions

    Q. why use STL.
    > Reuse well tested classes and functions(components).
    > Time saving.
    > It is used because its a good idea not to reinvent the wheel.

    Components of STL: 1. Containers. (object to store data and use template classes.) 
                       2. Algorithms. (it's a procedure to process data like Sorting, searching... and use template functions.)
                       3. Iterators. (it's an object points to an element in a container, handled just like pointers, connects algo with containers.)

    Types of Containers: 1. Sequence contianers (stores data in linear fashion. eg. vector, list, dequeue)
                         2. Associative containers (Direct access. eg. map, multimap, dictionary, set, multiset)
                         3. Derived containers (real world modeling eg. queue, stack, priority queue)

    Q. when to use which container?
    > Sequence container: 
        1. vector: random access is fast            (it's something like array)
                   insertion and deletion in middle is slow
                   insertion and deletion at the end is fast
        2. list: random access is slow              (it's something like linked list)
                 insertion and deletion in middle is fast
                 insertion and deletion at the end is fast
    Associative container: can't do random access       (it's something like tree)
                           insertion and deletion in middle is fast
                           insertion and deletion at the end is fast

    Derived containers: it depends (data structure)
                    
    

*/