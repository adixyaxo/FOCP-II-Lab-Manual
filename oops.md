# Object-Oriented Programming (OOP) Notes

Object-Oriented Programming (OOP) is a programming style based on the concept of "objects", which contain data (attributes) and code (methods).

## 1. Fundamentals: Class and Object

* **Class**: A **blueprint** or template. It defines properties and behaviors but doesn't occupy memory for data until an object is created.
  * *Real-life Example*: An **Architect's Blueprint** for a house. It shows where walls and windows go, but you can't live in the blueprint.
* **Object**: An **instance** of a class. It is the actual entity created from the blueprint.
  * *Real-life Example*: The **Actual House** built from the blueprint. You can build multiple houses (objects) from one blueprint (class).

## 2. Access Modifiers (Specifiers)

Access modifiers determine the visibility or accessibility of class members (variables and functions).

1. **Public**:
   * **Definition**: Accessible from anywhere (inside and outside the class).
   * *Real-life Example*: **Public Park**. Anyone can enter and use it.
2. **Private**:
   * **Definition**: Accessible only within the class itself. Not accessible from outside.
   * *Real-life Example*: **Your Personal Diary**. Only you can read or write in it; outsiders cannot access it directly.
3. **Protected**:
   * **Definition**: Accessible within the class and by derived classes (child classes), but not by the outside world.
   * *Real-life Example*: **Family Wealth**. It is accessible to parents and passed down to children, but not shared with strangers.

## 3. Getters and Setters

Since `private` variables cannot be accessed directly from outside the class, we use public functions called **Getters** and **Setters** to read and modify them safely. This ensures **Encapsulation**.

* **Getter**: A function to **read** (get) the value.
* **Setter**: A function to **update** (set) the value, usually with validation logic.
* *Real-life Example*: **Bank Account Balance**.

  * You cannot directly edit the bank's database to change your balance (Private variable).
  * You deposit money via a teller/ATM (**Setter**) -> The bank checks if the cash is real, then updates the balance.
  * You check your balance via an app (**Getter**) -> The bank displays the amount.

```cpp
class Student {
private:
    int marks; // Private: Cannot be touched directly

public:
    // Setter: Validates data before setting
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid Marks!";
        }
    }

    // Getter: Provides read-only access
    int getMarks() {
        return marks;
    }
};
```

## 4. The Four Pillars of OOP

### A. Encapsulation

* **Concept**: Wrapping up data (variables) and methods (functions) together into a single unit (Class) and restricting direct access to data.
* *Real-life Example*: **A Capsule**. The medicine is hidden inside the capsule shell. You consume the capsule, but you don't touch the chemical powder directly.

### B. Abstraction

* **Concept**: Hiding complex implementation details and showing only the necessary features to the user.
* *Real-life Example*: **Driving a Car**. You use the steering wheel, accelerator, and brakes to drive. You don't need to know how the engine combustion works or how the transmission gears shift internally.

### C. Inheritance

* **Concept**: A mechanism where a new class (Child/Derived) acquires the properties and behaviors of an existing class (Parent/Base). It promotes code reusability.
* *Real-life Example*: **Genetics**. A child inherits physical traits (like eye color, height) from their parents but also has their own unique traits.

### D. Polymorphism

* **Concept**: "Poly" means many, "Morph" means forms. It allows objects or methods to behave differently based on the context.
* *Real-life Example*: **A Person**.

  * A man acts as an **Employee** in the office.
  * He acts as a **Father** at home.
  * He acts as a **Customer** at a shop.
  * He is the same person but behaves differently in different situations.`

## 5. Constructors and Destructors

### A. Constructors

* **Definition**: A special member function that is automatically called the moment an object is created. It is primarily used to initialize the object's data members.
* **Key Rules**:
  * It must have the exact same name as the class.
  * It does not have a return type (not even `void`).
  * _There can be more than two constructors given that they have diffrent parameters and diffrent types and this is called_ **constructor overloading**
* **Types**:
  * **Default Constructor**: Takes no arguments.
  * **Parameterized Constructor**: Takes arguments to set initial values.
  * **Copy Constructor**: Initializes an object using another object of the same class.
* *Real-life Example*: **Moving into a new house**. When you first move in (creating the object), you immediately set up your furniture, paint the walls, and turn on the electricity. The constructor does this initial "setup" for your object.

### B. Destructors

* **Definition**: A special member function that is automatically called when an object is destroyed (e.g., when the program ends or the object goes out of scope). It is used to free up resources, like closing files or releasing memory.
* **Key Rules**:
  * It must have the exact same name as the class, preceded by a tilde (`~`).
  * It takes no arguments and has no return type.
  * There can only be one destructor per class.
* *Real-life Example*: **Moving out of a house**. Before you hand over the keys and leave forever (object destruction), you pack up your belongings, clean the floors, and turn off the water. The destructor is the "cleanup" crew.

**C++**

```
class Car {
public:
    // Constructor
    Car() {
        cout << "Car is created! Engine initialized.\n";
    }

    // Destructor
    ~Car() {
        cout << "Car is destroyed! Resources cleaned up.\n";
    }
};
```

## 6. Copy Constructor

### Definition

A **Copy Constructor** is a special member function that creates a new object as a copy of an existing object of the same class. It is automatically called when an object is initialized using another object.

### Syntax

```cpp
class ClassName {
public:
  ClassName(const ClassName &obj) {
    // Copy logic here
  }
};
```

### When is Copy Constructor Called?

* When an object is initialized with another object: `Student s2 = s1;`
* When an object is passed by value to a function.
* When an object is returned by value from a function.

### Types of Copy Constructor

#### A. Shallow Copy

* **Definition**: Copies only the values of member variables from one object to another. If a member is a pointer, only the address is copied, not the data it points to.
* **Problem**: Both objects end up pointing to the same memory location. When one object is destroyed, it frees the memory, leaving the other with a dangling pointer.
* *Real-life Example*: **Photocopying a check**. The copy and original both reference the same bank account. If someone cashes the original check, the account is debited once, but the copy becomes invalid or problematic.

```cpp
class Person {
public:
  char* name;
  
  // Default shallow copy (compiler-generated)
  Person(const Person &obj) {
    name = obj.name; // Only address copied, not the string
  }
};
```

#### B. Deep Copy

* **Definition**: Copies not just the pointer addresses but also allocates new memory and copies the actual data that the pointers point to.
* **Advantage**: Each object has its own independent copy of the data. Destroying one object doesn't affect the other.
* *Real-life Example*: **Scanning and printing a document**. The printout is an independent copy. Changes to the original don't affect the printed version.

```cpp
class Person {
public:
  char* name;
  
  // Deep copy constructor
  Person(const Person &obj) {
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name); // Actual data copied
  }
  
  // Destructor
  ~Person() {
    delete[] name;
  }
};
```

