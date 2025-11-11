
# Flowchart for C Function `max(a, b)`

This flowchart shows how the `max()` function compares two numbers and returns the greater one.


```mermaid
flowchart TD
A["Start"] --> B["Input a, b"]
B --> C{"a > b?"}
C -->|Yes| D["Return a"]
C -->|No| E["Return b"]
D --> F["End"]
E --> F
 ```
