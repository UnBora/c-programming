# 🌀 Loops in C Programming

Loops in C are used to **repeat a block of code multiple times**.  
They help reduce code repetition and automate tasks.

---

## 🧩 1. Types of Loops

| Loop Type | Description |
|-----------|-------------|
| `for`     | Used when the **number of iterations is known** |
| `while`   | Used when the loop should continue **while a condition is true** |
| `do...while` | Executes the loop **at least once**, then checks the condition |

---

## 🔁 2. `for` Loop

### Syntax
```c
for(initialization; condition; increment) {
    // code to execute
}
``` 

# 🌀 Flowcharts for C Loops

## 🔁 1. `for` Loop Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Initialize i = 0]
    B --> C{Condition: i < n?}
    C -- Yes --> D[Execute loop body]
    D --> E[Increment i++]
    E --> C
    C -- No --> F([End])

```
## 🔁 2. `while` Loop Flowchart
```mermaid
    flowchart TD
    A([Start]) --> B{Condition: i < n?}
    B -- Yes --> C[Execute loop body]
    C --> D[Increment i++]
    D --> B
    B -- No --> E([End])

```

## 🔁 3. `do...while` Loop Flowchart
```mermaid
    flowchart TD
    A([Start]) --> B[Execute loop body]
    B --> C[Increment i++]
    C --> D{Condition: i < n?}
    D -- Yes --> B
    D -- No --> E([End])

```