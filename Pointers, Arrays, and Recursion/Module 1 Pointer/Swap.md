
---

# Why Swap Functions Need Pointers in C

In C programming, a **swap function** is used to exchange the values of two variables. To understand why pointers are often necessary, let's break it down step by step.

---

## 1. Swap Without Pointers

Consider the following code:

```c
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
```


**Output:**

```
x = 10, y = 20
```

**Explanation:**

* The values of `x` and `y` are **not swapped**.
* Why? Because C uses **pass by value** by default.

    * When `swap(x, y)` is called, the function receives **copies** of `x` and `y`.
    * Changing `a` and `b` inside the function does **not affect** the original variables in `main`.

---

## 2. Swap Using Pointers

To actually swap the values, we need **addresses** of the variables:

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  // get the value at address a
    *a = *b;        // set value at address a to value at address b
    *b = temp;      // set value at address b to temp
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);   // pass addresses of x and y
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
```

**Output:**

```
x = 20, y = 10
```

**Explanation:**

* `int *a` and `int *b` are **pointers** that store addresses of `x` and `y`.
* `*a` and `*b` are used to **access and modify the original values**.
* By using pointers, the function **directly modifies the original variables** rather than copies.

---

## 3. Key Concept

* **Pass by value** → only copies of values are passed → original variables remain unchanged.
* **Pass by reference (via pointers)** → addresses are passed → original variables can be modified.

Swap **requires modifying the original variables**, so pointers are the most common and correct approach in C.

---

## 4. Summary Table

| Method          | Works? | Reason                                                     |
| --------------- | ------ | ---------------------------------------------------------- |
| Pass by value   | ❌ No   | Only copies are changed                                    |
| Pass by pointer | ✅ Yes  | Original values can be accessed and modified via addresses |

---

## 5. Conclusion

Whenever a function needs to **change the value of variables declared outside it**, pointers (or references in C++) are necessary.

This is why a swap function in C almost always **uses pointers**.




1.   안나 씨한테서 (                    ).

이야기를 많이 들었어요 

2. 왕량 씨와 저는 같은 회사에 다녀요.  왕량 씨는 제 (                    ). 

직장 동료예요 



5.   위의 내용과 맞는 것을 고르세요.

이 사람은 지금 한국 생활이 재미있어요. 





