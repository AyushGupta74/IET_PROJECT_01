# SOLID
SOLID is an acronym formed by the names of 5 design principles centered around better code design, maintainability, and extendability.
The SOLID software principles will guide you to:
- write code that’s easy to maintain;
- make it easier to extend the system with new functionality without breaking the existing ones;
- write code that’s easy to read and understand.

## 5 SOLID software development principles for an object-oriented design:
- Single Responsibility Principle (SRP)
- Open-Closed Principle (OCP)
- Liskov's Substitution Principle (LSP)
- Interface Seegregation Principle (ISP)
- Dependency Inversion Principle (DIP)

## Single Responsibility Principle (SRP)
The single responsibility principle states that a class, module, or function should have only one reason to change, meaning it should do one thing.

For example, a class that shows the name of an animal should not be the same class that displays the kind of sound it makes and how it feeds.
This code will violate the single responsibility principle because the class that's responsible for printing the name of the animal also shows the sound it makes and its type of feeding.

To fix this, we have to create a separate class for the sound and feeding methods.
This way, each of the classes is doing only one thing:
- The first one prints the name of the animal.
- The second prints the kind of sound it makes.
- And the third one prints its kind of feeding.

That’s more code, but better readability and maintainability. A developer who didn’t write the code can come to it and understand what’s going on quicker than having it all in one class.

## Open-Closed Principle (OCP)
The open-closed principle states that classes, modules, and functions should be open for extension but closed for modification.
It means you should be able to extend the functionality of a class, module, or function by adding more code without modifying the existing code.
The goal is to keep working, tested code intact, so over time, it becomes bug resistant.

For example, a class that shows speed of animals by using switch case.
This code will violate the open-closed principle because if you want to add a new animal type, you have to modify the existing code by adding another case to the switch statement.

To fix this, we have to create a new class that extends the animal type class and pass it to the parent class without modifying the existing code of parent class.

## Liskov Substitution Principle (LSP)
The principle states that child classes or subclasses must be substitutable for their parent classes or super classes. In other words, the child class must be able to replace the parent class. This has the advantage of letting you know what to expect from your code.

## Interface Segregation Principle (ISP)
It suggests that software developers should break down large interfaces into smaller, more specific ones, so that clients only need to depend on the interfaces that are relevant to them. This can make the codebase easier to maintain.
This means you create individual components that have functionality specific to them. The component responsible for implementing scroll to the top, for example, will not be the one to switch between light and dark, and so on.

## Dependency Inversion Principle (DIP)
It is about decoupling software modules. That is, making them as separate from one another as possible.
The principle states that high-level modules should not depend on low-level modules. Instead, they should both depend on abstractions. Additionally, abstractions should not depend on details, but details should depend on abstractions.
In simpler terms, this means instead of writing code that relies on specific details of how lower-level code works, you should write code that depends on more general abstractions that can be implemented in different ways.
This makes it easier to change the lower-level code without having to change the higher-level code.
