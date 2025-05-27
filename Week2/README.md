# Week 2

## Let us start with an example

So now you have started to learn about how to start building projects in cpp. To solidify this knowledge let us start with a basic example. Note that the example we start building here will need to be submitted for your first checkpoint, so make sure you work regularly and do a good job :)

Enough yapping! We are going to start simple with a class to represent a rectangle. 
So a rectangle has 2 parameters that are used to describe it, its length and its breadth. 
Encode this into the class used to make the rectangle object.

- Task 1.1 : Make a basic class to represent a rectangle
    -
    - Include methods `getLength()`, `getBreadth()` as part of this class
    - Feel free to add other parameters/methods such as color, `getArea()`..etc. Be creative and add as many relevant features as you can

Now that we have a rectangle object the natural next step is a square. 

- Task 1.2 : Make a subclass of the `Rectangle` to create a `Square` class
    - 
    - Include checks wherever appropriate to make sure that the sides of the square are equal
    - Add a function `isSquare()` to your original class

This is looking good but lets make more life complicated. We want to add a circle. The issue is how to link the circle class to the other two shape classes? Well making all of them have a parent shape class seems fair enough. 

- Task 1.3 : Make a `Circle` class and enclose all the created classes in a parent class called `Shape` 
    -
    - Things break in the future when you include Shape into the picture and try to access the subclasses's methods on Shape objects
    - Example: This will break unless you create Shape class appropriately, refer to [polymorphism](https://www.learncpp.com/cpp-tutorial/virtual-functions/) to get a better grasp on the issuse. Note that the webpage is too extensive, feel free to skip details of cpp and focus on the examples. 
    ```
    Shape *A;
    A = new Rectangle();
    A->getLength();
    ```

- Task 1.4 : Shapes ++
    -
    - The framework is setup now, build shapes as you wish
    - We expect a minimum of an ellipse which the circle should be changed to derive from to be implemented
    - Note that for the future part of this exercise we require you to implement the following functions with the exact same names. **Please keep the types of all length parameters as `int`**

- Task 1.5 : `getShape()`
    -
    - The shape class must have implemented a function `getShape()` that returns an integral value to denote the shape it actually represents
     ```
    Shape *A;
    A = new Rectangle();
    std::cout << A->getShape();
    ```
    The above should output "0" to denote that the shape is a rectangle, the mapping between shapes and their id's is given in the end of the document. Feel free to use consecutive id's continuing from there for your custom shapes. 
- Task 1.6 : `Coordinates()`
    -
    - Add a coordinate system to allow shapes to be translated in the 2D plane
    - The default for any shape must be (0,0)
    
In general please use the DRY principle (Don't repeat yourself), if you are ever copy pasting code then you are robbing away modularity. This example while possible to implement by rewriting code for each shape class, it is designed to allow you to learn about modular code, and writing code that makes future extensions/revisons easier. That knowledge gained would be extremely useful to build the actual simulator
## Shape Interface & Derived Classes

Each shape is assumed to be **axis-aligned** (i.e., no rotation).

### Base Class: `Shape`
- `getShape()` — returns the **shape ID** (see mapping below)

---

### `Rectangle`
- `getLength()` — returns the **length** (x-dimension)
- `getBreadth()` — returns the **breadth** (y-dimension)

---

### `Square`
- `getLength()` — returns the **side length** (same as length and breadth)
- `getBreadth()` — (optional or same as length for compatibility)

---

### `Circle`
- `getRadii()` — returns the **radius**

---

### `Ellipse`
- `getXLength()` — returns the **semi-major axis** (x-direction)
- `getYLength()` — returns the **semi-minor axis** (y-direction)

---

## Shape ID Mapping (via `getShape()`)

| Shape      | ID |
|------------|----|
| Rectangle  |  0 |
| Square     |  1 |
| Circle     |  2 |
| Ellipse    |  3 |



