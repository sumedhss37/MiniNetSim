# Week 5 – Network Simulator Design Phase

Welcome to Week 5 of the Network Simulator Project.

This week marks the beginning of the design phase. As emphasized in the Shapes assignment, a "design first, code later" approach is extremely beneficial for complex projects like this. Your primary goal this week is to design the core classes and their interactions using UML diagrams. This will serve as a blueprint for implementation in the coming weeks.

## Objective

Design your simulator by creating a UML class diagram that outlines the structure of your simulation engine. No code needs to be written this week — focus entirely on the design.

## Required Components

We expect your UML diagram to include at least the following core components. You may expand on these as necessary.

### Event (Abstract Base Class)
- Represents any action in the simulation.
- Should include attributes like `time`, and an abstract `execute()` method.
- Derived classes:
  - `PacketArrivalEvent`
  - `PacketSendEvent`
  - (Optional: `LinkDelayEvent`, `RoutingEvent`, etc.)

### Packet
- Represents data transmitted across the network.
- Can include one or more headers and a payload.

### PacketHeader (Optional Abstract Class)
- A base class for headers.
- Possible derived classes:
  - `IPHeader`, `TCPHeader`, etc.

### Node
- Represents a device in the network.
- Derived classes:
  - `Host` – end device
  - `Router` / `Switch` – forwarding device

### Network
- A graph structure that connects nodes.
- Responsible for topology management, scheduling events, and node lookup.

### Simulator
- Class with the event queue of the simulator 
- Should have a start function which starts and manages the event queue by popping recent events and processing them to create new events
- Can have logging functions in the same (suggested to take care of logging here itself)
## Design Guidelines

- Define class interfaces clearly (methods and attributes).
- Use inheritance for:
  - Different event types
  - Different node types
  - Optional packet header types
- Keep extensibility in mind:
  - Support arbitrary graph topologies
  - Allow sending packets between any two nodes
  - Avoid hardcoding assumptions

## UML Diagram Requirements

Your UML diagram should:

- Clearly show all classes
- Include attributes and method names
- Include inheritance relationships
- Optionally show interactions between classes


| Resource                    | Link |
|----------------------------|------|
| Draw.io (Web UML Tool)     | [draw.io](https://draw.io) |
| PlantUML (Text-based UML)  | [PlantUml](https://plantuml.com/class-diagram) |
| Lucidchart                 | [lucidchart](https://www.lucidchart.com) |
| UML Tutorial               | [Tutorial](https://www.visual-paradigm.com/guide/uml-unified-modeling-language/uml-class-diagram-tutorial/) |
| Toy model to understand features | [model](https://netsim.erinn.io/)|

## Next Steps

Next week, we will begin coding based on the UML diagrams you submit. A thoughtful design now will make the implementation phase much smoother and faster.
