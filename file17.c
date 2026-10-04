//Conversions
//to convert from a number -> string
//#include <stdio.h>
//to convert from numeric value -> string
// int main(void)
// {
// 	char s[10];
// 	float f=3.14159;
// 	snprintf(s,10,"%f",f);  //put 10 character spaces into that string
// 	printf("String value is : %s\n",s);
// }
//to convert from string -> Numeric value
//we have two families of functions that are used to convert from string->Numeric
//atoi -> ASCII to (int,float,long int,long long int)
//strtol -> string to long

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {
// 	char *p="3.1456";
// 	float f;
// 	f=atof(p);
// 	printf("The float value is : %f\n",f);
// }

//let's use : strtoi family functions
//strtol ->string to long
//strtoll ->string to long long int 
//strtoul -> string to unsigned long int
//strtoull ->string to unsigned long long int
//strtof -> string to float
//strtod ->string to double
//strtold -> string to long double
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void) 
// {
// 	//char *s="3490"; //this is a string-> convert to unsigned long int
// 	//unsigned long int x=strtoul(s,NULL,10);
// 	//printf("The unsigned long integer is :%lu\n",x);
// 	char *n="101010";
// 	unsigned long int m = strtoul(n,NULL,10);
// 	printf("the unsigned long int of   %s is : %lu (binary->binary)\n",n,m);
// 	unsigned long int z = strtoul(n,NULL,2);
// 	printf("the unsigned long int of in base  %s is : %lu  (binary->decimal)`\n",n,z);
//
// }
//
//
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {
// 	char *s="34x90";
// 	char *badchar;
// 	unsigned long int x=strtoul(s,&badchar,10);
// 	printf("%lu\n",x);
// 	printf("Invalid character( isn't valid in base 10(decimal)):%c\n",*badchar);
//
// }

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
// 	//char *s="120921"; //will return success  -> will return success the same value.
// 	char *s="1234x3";  // x isn't valid in base 10 
//         // will return : error -> partial=1234l,Invalid=x
// 	char *badchar;
// 	unsigned long int x=strtoul(s,&badchar,10);
// 	if(*badchar=='\0'){
// 		printf("Success(string->unsigned long number conversion)!! %lu \n ",x);
// 	}
// 	else {
// 		printf("Partial convertion: %ul\n",x);
// 		printf("Invalid character: %c\n",*badchar);
//
// 	}
// }
//the difference between atof , strto... -> is that 
		// strto -> is very strict you can't check the error or make handling for it like the same way that we used with strto.......
	
//Char Conversions
//to convert from a character to a number
// int main(void)
// {
// 	printf("%d %d\n",4,'4');   //this will generate UTF-8 for the second character:
// 				   // 4=52
// }
//now how to convert from UTF-8 to decimal 

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
// 	//rules: 0    1    2    3    4    5   6   7   8   9
// 	//UTF-8: 48   49   50   51   52   53  54  55  56  57  
// 	//so that you can find the decimal of 49 by subtract 0 (48) = 1
// 	//you can find the UTF-8 of 1 = 1 + UTF-8(0) = 49
// 	char c='6';
// 	//find UTF-8
// 	int n = c ;
// 	int m= c - '0' ;
// 	printf("%d\n",n);  // will print UTF-8 of 6 (convertion)
// 	printf("%d\n",m); // will print 6
// 	// let's do the reverse
// 	int d = 6 ;
// 	char e = d + '0' ;
// 	printf("%c\n",e);  // will print the decimal value 6
// 	printf("%d\n",e);  // will print the UTF-8 value   54 
//
// }
//Numeric conversions:
1. **Explicit conversion** — you tell C to convert a value.
    
2. **Implicit conversion** — C automatically converts it for you.
    
3. **Integer promotions / usual arithmetic conversions** — special rules C uses when doing expressions like `char + int` or `int + double`.
    

Let's walk through it from the ground up with actual values and binary.

---

# 1. What does "conversion" mean?

Suppose:

```c
int x = 10;
double y = x;
```

`x` is an `int`:

```text
10
```

but `y` is a `double`.

So C has to transform:

```text
int 10
   ↓
double 10.0
```

That's a **conversion**.

The important question is:

> What happens when the value doesn't fit in the new type?

That's where most of this chapter comes from.

---

# 2. Boolean conversion

C has `_Bool` / `bool` if you include `<stdbool.h>`.

```c
#include <stdbool.h>

bool a = 0;
bool b = 10;
bool c = -5;
```

The rule is extremely simple:

```text
0       → false (0)
anything else → true (1)
```

So:

```c
bool a = 0;       // 0
bool b = 100;     // 1
bool c = -100;    // 1
```

Think:

```text
        0 ─────────→ false
       / \
      /   \
anything else ────→ true
```

---

# 3. Integer → unsigned integer

This is where the book talks about an **odometer**.

Suppose:

```c
unsigned char x = 250;
```

Usually `unsigned char` can hold:

```text
0 → 255
```

What happens if we try:

```c
unsigned char x = 256;
```

It doesn't fit.

Unsigned integers use **modulo arithmetic**.

For an 8-bit unsigned integer:

```text
0 1 2 3 ... 253 254 255
                     ↓
                     0
```

Just like an odometer:

```text
000
001
002
...
999
000
```

So:

```c
unsigned char x = 256;
printf("%u\n", x);
```

On a typical implementation you'll get:

```text
0
```

And:

```c
unsigned char x = 257;
```

becomes:

```text
1
```

Because:

```text
257 % 256 = 1
```

Likewise:

```text
258 → 2
259 → 3
...
511 → 255
512 → 0
```

### Why?

Because an 8-bit unsigned integer has only 256 possible values:

```text
2^8 = 256
```

So the values are:

```text
0 through 255
```

---

# 4. What does "high-order bits are dropped" mean?

This is the binary explanation.

Suppose we have an 8-bit unsigned value.

Take:

```text
256
```

In binary:

```text
256 = 1 0000 0000
```

That's **9 bits**.

But our `unsigned char` only has 8 bits:

```text
1 0000 0000
↑
extra bit
```

The 8-bit type keeps:

```text
0000 0000
```

which is:

```text
0
```

Now:

```text
257 = 1 0000 0001
```

Drop the high bit:

```text
0000 0001
```

which is:

```text
1
```

That's why the book says:

> high-order bits are just being dropped

---

# 5. Integer → signed integer

This one is different.

Suppose:

```c
unsigned char x = 192;
signed char y = x;
```

A typical system gives:

```text
y = -64
```

Why?

An 8-bit signed integer typically uses **two's complement**.

The bit pattern for `192` is:

```text
11000000
```

If we interpret those same bits as a signed 8-bit number:

```text
11000000
```

the first bit is `1`, meaning negative.

Using two's complement:

```text
11000000
```

Invert:

```text
00111111
```

Add 1:

```text
01000000
```

That's:

```text
64
```

Therefore:

```text
11000000 = -64
```

So:

```text
unsigned char:
11000000 → 192

signed char:
11000000 → -64
```

**Same bits, different interpretation.**

This is a VERY important concept in C.

---

# 6. Why does the book say "implementation-defined"?

Because C does **not require every computer/compiler to handle this conversion in exactly the same way**.

The C standard basically says:

> If you convert an integer to a signed integer type and it doesn't fit, the implementation gets to define what happens.

So your compiler might document the behavior.

That's different from:

### Defined behavior

C tells you exactly what happens.

### Implementation-defined behavior

C says:

> The compiler can choose, but it must document its choice.

### Undefined behavior

C says:

> Anything can happen. The standard gives you no guarantees.

Keep those three categories separate.

---

# 7. Integer → floating point

Now:

```c
int x = 10;
float y = x;
```

C converts:

```text
10 → 10.0
```

Easy.

Likewise:

```c
int x = 123;
double y = x;
```

becomes:

```text
123 → 123.0
```

The floating-point type tries to represent the integer as accurately as possible.

---

# 8. Floating point → integer

This is very important.

Suppose:

```c
double x = 3.9;
int y = x;
```

The fractional part is discarded:

```text
3.9 → 3
```

Not:

```text
4
```

It does **not round**.

Try:

```c
double x = 3.999;
int y = x;
```

Result:

```text
3
```

And:

```c
double x = -3.9;
int y = x;
```

Result:

```text
-3
```

So think:

```text
3.9   → 3
3.1   → 3
-3.9  → -3
-3.1  → -3
```

It essentially throws away everything after the decimal point.

---

# 9. But what if the floating number is too big?

Suppose:

```c
double x = 999999999999999999999999999999.0;
int y = x;
```

If that value cannot be represented by `int`, you have **undefined behavior**.

That's why the book says:

> So don't do that.

In practical programming:

```c
double → int
```

is fine when you **know the value is in range**.

---

# 10. The really important part: implicit conversions

Now we get to:

> "These are conversions the compiler does automatically for you."

Consider:

```c
int x = 10;
double y = x;
```

You didn't write:

```c
double y = (double)x;
```

You simply wrote:

```c
double y = x;
```

C automatically performs:

```text
int
 ↓
double
```

That's an **implicit conversion**.

---

# 11. Integer promotions

This sounds complicated but the basic idea is simple.

Consider:

```c
char x = 10;
char y = 20;

int z = x + y;
```

You might think:

```text
char + char → char
```

But that's not what happens.

C promotes the `char`s to `int` before doing the arithmetic:

```text
char x = 10
     ↓
   int 10

char y = 20
     ↓
   int 20

int 10 + int 20
        ↓
       30
```

So:

```c
int z = x + y;
```

is effectively:

```c
int z = (int)x + (int)y;
```

Conceptually.

---

# 12. Why does C do this?

Historically, C performs many small-integer calculations using `int`.

For example:

```c
char a = 100;
char b = 50;

int c = a + b;
```

If C performed the addition as an 8-bit `char`, you could get overflow problems much earlier.

Instead:

```text
char 100 → int 100
char 50  → int 50

100 + 50 = 150
```

The result is an `int`.

This is called an **integer promotion**.

---

# 13. When does integer promotion happen?

You'll encounter it with things such as:

```c
char
short
```

being used in expressions.

For example:

```c
char a = 10;
char b = 20;

int result = a + b;
```

Both are promoted to `int`.

Also:

```c
char x = 10;

int y = +x;
```

The unary `+` causes promotion.

Similarly:

```c
int y = -x;
```

And it matters with functions that accept variable arguments, such as:

```c
printf(...)
```

---

# 14. The Usual Arithmetic Conversions

Now we're getting to the big rule.

Suppose:

```c
int x = 3;
double y = 1.2;

double z = x + y;
```

What happens?

We have:

```text
int + double
```

C says:

> There's a floating-point type here, so convert the integer to floating point.

Therefore:

```text
int 3
 ↓
double 3.0

double 3.0 + double 1.2
             ↓
            4.2
```

So:

```c
double z = x + y;
```

is conceptually:

```c
double z = (double)x + y;
```

---

# 15. Another example

```c
int x = 10;
float y = 2.5;

float z = x + y;
```

C does:

```text
10 → 10.0f

10.0f + 2.5f
       ↓
      12.5f
```

---

# 16. What happens with only integers?

Suppose:

```c
char a = 10;
int b = 20;

int c = a + b;
```

First:

```text
char a → int
```

Then:

```text
int + int
```

So:

```text
10 + 20 = 30
```


