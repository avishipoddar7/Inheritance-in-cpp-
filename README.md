# Inheritance in C++ (OOP)

Inheritance is a fundamental concept in **object-oriented programming (OOP)** that allows a new class (the **derived class** or **child class**) to inherit properties and behaviors from an existing class (the **base class** or **parent class**).  
This promotes **code reusability** by letting you create a hierarchy of classes that share common features, avoiding redundant code.

---

## 📌 Types of Inheritance

### 1. Single Inheritance
In this type, a single derived class inherits from a single base class.  
It’s the simplest form of inheritance, creating a one-to-one relationship between parent and child.

<img width="682" height="400" alt="image" src="https://github.com/user-attachments/assets/26333374-325c-4e86-8d9a-4ccdc3b7d0e9" />


**Example**:  
The `car` class inherits from the `vehicle` class, meaning a car is a type of vehicle.  
It inherits the `brand` property and the `colour()` method from the `vehicle` class.

---

### 2. Multilevel Inheritance
This involves a **chain of inheritance** where a derived class inherits from another derived class.

<img width="682" height="400" alt="image" src="https://github.com/user-attachments/assets/4edc65f1-29cb-452e-86c2-f82cb2b542ad" />


**Example**:  
The `hair_style` class inherits from `hair_type`, which in turn inherits from `hair_texture`.

---

### 3. Multiple Inheritance
A derived class can inherit from **more than one base class**, combining properties from all its parent classes.

<img width="682" height="400" alt="image" src="https://github.com/user-attachments/assets/aa67704b-da09-436b-a694-099466581e75" />


**Example**:  
A `Specialist` class inherits from `hospital`, `doctor`, and `doc_type`.

---

### 4. Hierarchical Inheritance
In this model, **multiple classes** are derived from a single base class.

<img width="682" height="400" alt="image" src="https://github.com/user-attachments/assets/6ad88730-4bd5-4685-85d8-8a95db507808" />


**Example**:  
The `Habitat`, `Food`, and `Behaviour` classes all inherit from the `Animals` class.

---

## 📌 Access Specifiers in Inheritance

When a class inherits from a base class, the **access specifier** (`public`, `protected`, or `private`) used in the inheritance declaration determines how the inherited members can be accessed in the derived class.  

👉 **Note:** Private members of the base class are **never directly accessible** to any derived class.

### Public Inheritance
- `public` members remain `public`.
- `protected` members remain `protected`.

**Example:**  
`Harley` inherits publicly from `Vehicle`.  
- You can access `h.brand` directly because it’s `public`.  
- You cannot access `h.fuel` because it’s `protected`.

---

### Protected Inheritance
- Both `public` and `protected` members of the base class become **`protected`** in the derived class.

**Example:**  
`RoyalEnfield` inherits protectedly from `Vehicle`.  
- `brand` and `fuel` are now `protected` in `RoyalEnfield`.  
- They are accessible **within the class**, but not outside it.

---

### Private Inheritance
- Both `public` and `protected` members of the base class become **`private`** in the derived class.

**Example:**  
`Jawa` inherits privately from `Vehicle`.  
- `brand` and `fuel` become `private` in `Jawa`.  
- They are accessible only within the `Jawa` class itself.

---

## Algorithms  

This repository demonstrates different types of inheritance in C++ with simple examples.  
Each experiment highlights how members are inherited and accessed.

---
### exp14a.cc – Single Inheritance  
- `vehicle`: `brand="Ford"`, method `colour() → "Red!"`  
- `car`: inherits `vehicle`, adds `model="Mustang"`  
- `main()`: create `mycar`, print `brand`, `model`, call `colour()`  

---

### exp14b.cc – Multiple Inheritance  
- `hospital`: `nearby="Jupiter"`  
- `doctor`: `doc="Dr.Sharma"`  
- `doc_type`: `type="Cardiologist"`  
- `Specialist`: inherits all three  
- `main()`: create `sp`, print `nearby`, `doc`, `type`  

---

### exp14c.cc – Multilevel Inheritance  
- `hair_texture`: `texture="Rough"`  
- `hair_type`: inherits `hair_texture`, adds `type="Straight"`  
- `hair_style`: inherits `hair_type`, adds `style="Layers"`  
- `main()`: create `hair`, print `texture`, `type`, `style`  

---

### exp14d.cc – Hierarchical Inheritance  
- `Animals`: `animal_1="Tiger"`, `animal_2="Dolphin"`, `animal_3="Crocodile"`  
- `Habitat`, `Food`, `Behaviour`: each inherit `Animals` and add details  
- `main()`: create `h`, `f`, `b`, print combined info for each animal  

---

### exp14e.cc – Public, Protected, Private Inheritance  
- `Vehicle`: `brand` (public), `fuel` (protected), `year` (private)  
- `Harley` (public inheritance): can access `brand` & `fuel`  
- `RoyalEnfield` (protected inheritance): `brand` & `fuel` → protected  
- `Jawa` (private inheritance): `brand` & `fuel` → private  
- `main()`: test access for each class  

---


## 📂 Summary of Files

| File       | Type of Inheritance | Description |
|------------|---------------------|-------------|
| **exp14a.cc** | Single Inheritance | A `car` class inherits from a single `vehicle` class, demonstrating a basic "is-a" relationship (a car is a vehicle). |
| **exp14b.cc** | Multiple Inheritance | A `Specialist` class inherits from three separate base classes (`hospital`, `doctor`, and `doc_type`), combining their properties into a single child class. |
| **exp14c.cc** | Multilevel Inheritance | A hierarchical chain is created, with `hair_style` inheriting from `hair_type`, which in turn inherits from `hair_texture`. |
| **exp14d.cc** | Hierarchical Inheritance | Multiple classes (`Habitat`, `Food`, and `Behaviour`) inherit from a single base class (`Animals`). |
| **exp14e.cc** | Access Modes | Demonstrates the different access specifiers (**public, protected, private**) in inheritance and how they affect member accessibility. |

---
