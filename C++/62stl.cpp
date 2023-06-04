/*-------------------------CODE WITH HARRY------------------------------------
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

/*
---------------------------GREEK FOR GREEK-------------------------------------

> The STANDARD TEMPLATE LIBRARY (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. 
> It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.

> The C++ Standard Template Library (STL) is a collection of algorithms, data structures, and other components that can be used to simplify the development of C++ programs. The STL provides a range of containers, such as vectors, lists, and maps, as well as algorithms for searching, sorting and manipulating data.

> One of the key benefits of the STL is that it provides a way to write generic, reusable code that can be applied to different data types. This means that you can write an algorithm once, and then use it with different types of data without having to write separate code for each type.

> The STL also provides a way to write efficient code. Many of the algorithms and data structures in the STL are implemented using optimized algorithms, which can result in faster execution times compared to custom code.


Some of the key components of the STL include:

1. Containers: The STL provides a range of containers, such as vector, list, map, set, and stack, which can be used to store and manipulate data.
2. Algorithms: The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.
3. Iterators: Iterators are objects that provide a way to traverse the elements of a container. The STL provides a range of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator, that can be used with different types of containers.
4. Function Objects: Function objects, also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm, allowing you to customize its behavior.
5. Adapters: Adapters are components that modify the behavior of other components in the STL. For example, the reverse_iterator adapter can be used to reverse the order of elements in a container.


STL has 4 components:
    1. Algorithms
    2. Containers
    3. Functors
    4. Iterators

1. Algorithms: The header algorithm defines a collection of functions specially designed to be used on a range of elements. 
They act on containers and provide means for various operations for the contents of the containers.

        Algorithm:
            > Sorting
            > Searching
            > Important STL Algorithms
            > Useful Array algorithms
            > Partition Operations
        Numeric
            > valarray class

2. Containers: Containers or container classes store objects and data. There are in total seven standards “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

(a) Sequence Containers: implement data structures that can be accessed in a sequential manner.
                       > vector
                       > list
                       > deque
                       > arrays
                       > forward_list( Introduced in C++11)

(b) Container Adaptors: provide a different interface for sequential containers.
                       > queue
                       > priority_queue
                       > stack

(c) Associative Containers: implement sorted data structures that can be quickly searched (O(log n) complexity).
                       > set
                       > multiset
                       > map
                       > multimap

(d) Unordered Associative Containers: implement unordered data structures that can be quickly searched
                       > unordered_set (Introduced in C++11)
                       > unordered_multiset (Introduced in C++11)
                       > unordered_map (Introduced in C++11)
                       > unordered_multimap (Introduced in C++11)

3. Functors: The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.

4. Iterators: As the name suggests, iterators are used for working on a sequence of values. They are the major feature that allows generality in STL

*/