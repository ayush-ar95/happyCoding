/*
    polymorphism :- poly (many)+ morphism (form);

    > we can define polymorphism as the ability of a message to be displayed in more than one form.
    > A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee.
    > So the same person exhibits different behavior in different situations. This is called polymorphism.
    > Polymorphism is considered one of the important features of Object-Oriented Programming.

    Types of Polymorphism :-
            1. Compile-time Polymorphism (early binding or static binding)
            2. Runtime Polymorphism (late binding)

    1. Compile Time Polymorphism :- This type of polymorphism is achieved by (a) function overloading
                                                                          or (b) operator overloading.
        (a) Function overloading :- When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading.
        > Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.
        > In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name.

        (b) Operator overloading :- C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. 
        > For example, we can make use of the addition operator (+) for string class to concatenate two strings. 
        > We know that the task of this operator is to add two operands. 
        > So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 

    2. Run Time Polymorphism :- This type of polymorphism is achieved by (a) Function Overriding 
                                                                     and (b) virtual funcitons. 
    > Late binding and dynamic polymorphism are other names for runtime polymorphism. 
    > The function call is resolved at runtime in runtime polymorphism. 
    > In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

        (a) Funciton overriding :- Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

        (b) Virtual funtion :- A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class. 

            Some Key Points About Virtual Functions:
                > Virtual functions are Dynamic in nature. 
                > They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class
                > A virtual function is called during Runtime
*/