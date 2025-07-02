# Lecture 03: Start C++ from Zero and Write Your First Program

## 1. ASCII (American Standard Code for Information Interchange)

**Definition**:  
ASCII is a character encoding standard used to represent text in computers. Each character (letter, digit, or symbol) has a unique numeric code.

**Example**:
- 'A' → ASCII: 65  
- 'a' → ASCII: 97  
- '0' → ASCII: 48

**Use**:  
When you type a character, the computer stores its ASCII number in memory.

*Simple words*: Computer characters ko directly samajh nahi sakta, isliye unka ek number hota hai (ASCII code), wahi store hota hai.

---

## 2. Variable

**Definition**:  
A variable is a named memory location used to store data. It allows you to use and modify values during program execution.

**Example**:
```cpp
int age = 21;
Here:

int is the data type.

age is the variable name.

21 is the value stored.

Simple words: Variable ek dabba (container) hota hai jisme koi value store hoti hai, aur us dabbe ka ek naam hota hai jaise age.

3. Data Types
Definition:
Data types define the kind of data a variable can store.

Common Data Types:

Data Type	Description	Example
int	Integer values	5, -10
float	Decimal numbers	3.14, -2.5
char	Single character	'A', 'z'
bool	Boolean (true/false)	true, false

Simple words: Data type batata hai ki variable me kis type ka data store hoga — number, character ya true/false.

4. How Numbers are Stored in Memory
Positive Numbers are stored in binary format using only 0s and 1s.

Example (4-bit binary):

yaml
Copy
Edit
Decimal:  5
Binary :  0101
Note: Binary is base-2 number system which computers understand.

5. How Negative Numbers are Stored in Memory
Method Used: Two’s Complement

Steps to convert -5 (in 4-bit format):

Write binary of +5 → 0101

Invert the bits → 1010

Add 1 → 1011

So, -5 is stored as 1011 in memory (4-bit).

Simple words: Negative number ko store karne ke liye computer pehle number ka ulta karta hai aur fir usme 1 jod deta hai — is method ko two’s complement kehte hain.

6. Memory Units
Hierarchy of Memory Units:

Unit	Size
Bit	0 or 1
Byte	8 Bits
KB	1024 Bytes
MB	1024 KB
GB	1024 MB
TB	1024 GB

Example:

1 character like 'A' = 1 byte

Ek simple 100-word text file ≈ few KB

Simple words: Jaise distance ke liye meter, kilometer hote hain, waise computer memory ke liye byte, KB, MB hote hain.