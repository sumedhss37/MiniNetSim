# Week 3

Last week we implemented the shape classes to understand the concepts we learned better. However, You may have found it difficult to design and keep in mind all the relationships and functions that you are adding under each class.

This is because we skipped the important step of actually designing our classes, methods, relationships between them and directly jumped to their implementation. Even if you could manage that in the exercise without an explicit design phase, as we build more complicated structures this makes things much harder.

UML (Unified Modeling Language) diagrams help us immensely to design our class structures in such a manner that the only thing left is to fill in the logic of the methods, which is also quite simple due to most major problems/subtleties being fixed priorly.

---

### Task 1.1: Understanding UML

- Watch this video to get a better understanding of what [UML](https://www.youtube.com/watch?v=6XrL5jXmTwM) is and how it is useful.
- Explore tools to make UML diagrams and pick something that suits you. [Here](https://www.smartdraw.com/uml-diagram/uml-diagram-tool.htm) is one possible suggestion.

> Ideally, a project would start with the designing of the classes but we have switched the order here for ease of understanding.

---

### Task 1.2: Making UML diagram for Shapes designed last week

- Use the tool you like to make the UML diagrams for the `Shape` and related classes.
- If you created additional classes (say for coordinates), make sure to add them too.

---

### Task 1.3: Canvas Class

- Implement a `Canvas` class that can hold a `vector<Shape*>` to denote all the shapes held by the canvas.
- Before doing so, make sure to create the UML diagram of the same and add it to the overall design.
- Create an `addShape()` method that takes a shape pointer and adds it to the canvas.
- Using the SFML library, implement a function `displayCanvas()` capable of creating a persistent window and printing all the shapes you have created (at least ellipse, rectangle, circle, square). Note that you can (are expected to) distribute the display logic of each shape to its own class. While it is possible to handle this in the canvas class, this is against the learning goal and not helpful. 

**Modularise, Modularise, Modularise**

 You can find the relevant resources for SFML:
   1) [Setup + Window creation](https://www.youtube.com/watch?v=lftcRWAIycg)
   2) [Shapes](https://www.youtube.com/watch?v=cWgox89PZro)
   3) [Built in Shapes](https://www.sfml-dev.org/tutorials/3.0/graphics/shape/#custom-shape-types)


SFML will be extremely useful especially if you want to extend the network simulator to be actually visible to the user directly. Please take care to dive deeper, branching off from the given resources if you are interested  
## To run the SMFL 

```bash
sudo apt install libsfml-dev   
g++ [relevant files] -o [executable name] -lsfml-graphics -lsfml-window -lsfml-system
```
