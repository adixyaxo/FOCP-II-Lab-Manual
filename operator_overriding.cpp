// The word polymorphism means "having many forms." In C++, it refers to the ability of a function, operator, or object to behave differently depending on the context.

// Here is a detailed breakdown of the two types mentioned in your code:

// 1. Compile Time Polymorphism (Early Binding)
// This occurs when the compiler determines exactly which function or operator needs to be executed during the compilation phase (before the program even runs).

// Early Binding (Static Binding): Because the compiler has all the information it needs (like the number and type of arguments), it binds the function call to the function definition immediately. It is very fast and efficient.
// Function Overloading: You can have multiple functions with the exact same name in the same scope, as long as their parameters (number of arguments or types of arguments) are different. The compiler looks at the arguments passed during the call and figures out which specific version of the function to compile.
// Operator Overloading: You can redefine how standard operators (like +, -, ==) work for your own custom classes. For example, you can teach the + operator how to add two of your custom Rectangle objects together. The compiler looks at the variables surrounding the operator to know which version to use.
// 2. Run Time Polymorphism (Late Binding)
// This occurs when the exact function to be called is NOT known at compile time. Instead, it is resolved during the execution of the program (run time).

// Late Binding (Dynamic Binding): The compiler leaves the decision of which function to call up to the program while it is running. This is slightly slower than early binding but provides massive flexibility.
// Overriding (Function Overriding): This happens when a Derived (child) class provides a specific implementation for a function that is already defined in its Base (parent) class. Both functions have the exact same name, return type, and parameters.
// "Only in case of inheritance": Run-time polymorphism is inextricably linked to inheritance and pointers. It works by using a pointer of a Base class to point to an object of a Derived class. By marking the base class function with the virtual keyword, C++ waits until run time to check what exact type of object the pointer is actually pointing to, and calls that specific object's overridden version of the function.
// Summary of the difference:

// Compile-time is about Overloading (same name, different parameters) and is resolved by the compiler.
// Run-time is about Overriding (same name, same parameters, different class implementations) and is resolved dynamically while the program runs, relying on inheritance and virtual functions.