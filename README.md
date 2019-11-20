# Unit-2-project

Development
-----------
## A traffic light with arduino 
```.c
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 500 millisecond(s)
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
```
A traffic light with arduino is a good way to be introduced into how to use the arduino.

### STOP!, GET READY!, GOOOOOOO!!
These are the three phases of the traffic light.

![TrafficLight](redlight.png)
**Fig. 1** This diagram shows the red light on indicating STOP.

![TrafficLight](amberlight.png)
**Fig. 2** This diagram shows the amber light on indicating GET READY.

![TrafficLight](greenlight.png)
**Fig. 3** This diagram shows the green light on indicating GO.
NOW LETSSSSSS GOOOOOO!!! VROOM VROOM!!

### Data Types in Arduino
| Data Type     | Range                          | Use or Description                                                 |
|---------------|--------------------------------|--------------------------------------------------------------------|
| Boolean       | 0 or 1                         | Simple true or false statements                                    |
| Long          | -2,147,483,648 - 2,147,483,648 | Negative integers, positive integers or 0. Eg. Population of Japan |
| Word          | 0 - 65535                      | Positive integers and 0.                                           |
| Char          | -128 - 127                     | English letters, numbers and some special characters.              |
| Float         | -3,4028235e38 - 3,4028235e38   | Decimals and scientific notation. Eg. The numerical value of pi.   |
| Int           | -32,768 - 32,767               | Negative, positive integers, and 0.                                |
| Unsigned Char | 0 - 255                        | Positive integers and 0. Eg. Height of man                         |
| Unsigned Long | 0 - 4,294,967,295              | Positive integers and 0.                                           |
| Void          | ------                         | It is a function that returns no values                            |
| Unsigned Int  | 0 - 65535                      | Positive integers and 0.                                           |

### Conversion of base 10 to base 2
This was very important to understand in the creation of our next program.
![BaseChange](baseconversion.png)
**Fig. 3** This diagram shows how to convert numbers from base 10 to base 2.
### Conversion of base 10 to other bases
1. Get the number.
1. Divide the number continuously by the new base until you get zero.
1. For each time you divide by the new base record the remainder.
1. Write the remainders in reverse form.
1. This gives you the new number in the new base.
### Conversion of base 2 to base 10.
1. Write down the binary number.
1. Write down the position of the individual numbers (1’s and 0’s) starting from the furthermost right. The first digit should have a position zero.
1. Express the positions in terms of powers of two. (eg. 8^0 for position zero)
1. Multiply the individual numbers by the powers of two
1. Add the products.
### Conversion of other bases to base 10. 
1. Write down the number.
1. Write down the position of the individual numbers starting from the furthermost right. The first digit should have a position zero.
1. Express the positions in terms of powers of the base. (eg. 8^0 for position zero)
1. Multiply the individual numbers by the powers of the base.
1. Add the products.

### The Hexadecimal base.
In the decimal base, we have digits only from 0 to the number before 10 (0-9). That is the same for every other base. But for the hexademical base, the numbers (10-15) aren't expressed as single digits. Hence, we express them as digits. A-10, B-11, C-12, D-13, E-14 and F-15. 

### Creating a counter from 0 to 31 in binary using LED lights.
| bitA | bitB | bitC | bitD | bitE | Number |   |   |   |
|------|------|------|------|------|--------|---|---|---|
| 0    | 0    | 0    | 0    | 0    | 0      |   |   |   |
| 0    | 0    | 0    | 0    | 1    | 1      |   |   |   |
| 0    | 0    | 0    | 1    | 0    | 2      |   |   |   |
| 0    | 0    | 0    | 1    | 1    | 3      |   |   |   |
| 0    | 0    | 1    | 0    | 0    | 4      |   |   |   |
| 0    | 0    | 1    | 0    | 1    | 5      |   |   |   |
| 0    | 0    | 1    | 1    | 0    | 6      |   |   |   |
| 0    | 0    | 1    | 1    | 1    | 7      |   |   |   |
| 0    | 1    | 0    | 0    | 0    | 8      |   |   |   |
| 0    | 1    | 0    | 0    | 1    | 9      |   |   |   |
| 0    | 1    | 0    | 1    | 0    | 10     |   |   |   |
| 0    | 1    | 0    | 1    | 1    | 11     |   |   |   |
| 0    | 1    | 1    | 0    | 0    | 12     |   |   |   |
| 0    | 1    | 1    | 0    | 1    | 13     |   |   |   |
| 0    | 1    | 1    | 1    | 0    | 14     |   |   |   |
| 0    | 1    | 1    | 1    | 1    | 15     |   |   |   |
| 1    | 0    | 0    | 0    | 0    | 16     |   |   |   |
| 1    | 0    | 0    | 0    | 1    | 17     |   |   |   |
| 1    | 0    | 0    | 1    | 0    | 18     |   |   |   |
| 1    | 0    | 0    | 1    | 1    | 19     |   |   |   |
| 1    | 0    | 1    | 0    | 0    | 20     |   |   |   |
| 1    | 0    | 1    | 0    | 1    | 21     |   |   |   |
| 1    | 0    | 1    | 1    | 0    | 22     |   |   |   |
| 1    | 0    | 1    | 1    | 1    | 23     |   |   |   |
| 1    | 1    | 0    | 0    | 0    | 24     |   |   |   |
| 1    | 1    | 0    | 0    | 1    | 25     |   |   |   |
| 1    | 1    | 0    | 1    | 0    | 26     |   |   |   |
| 1    | 1    | 0    | 1    | 1    | 27     |   |   |   |
| 1    | 1    | 1    | 0    | 0    | 28     |   |   |   |
| 1    | 1    | 1    | 0    | 1    | 29     |   |   |   |
| 1    | 1    | 1    | 1    | 0    | 30     |   |   |   |
| 1    | 1    | 1    | 1    | 1    | 31     |   |   |   |

```.c
int bitA = 13;
int bitB = 12;
int bitC = 11;
int bitD = 10;
int bitE = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(bitA, OUTPUT);
  pinMode(bitB, OUTPUT);
  pinMode(bitC, OUTPUT);
  pinMode(bitD, OUTPUT);
  pinMode(bitE, OUTPUT);
  
  for (int n = 0; n <= 31; n++) {
  	//bit E
    if (n % 2 == 1) {
    	digitalWrite(bitE, HIGH);
  	}else
    {
      digitalWrite(bitE, LOW);
    }
    //bit D 
    if (n % 4 > 1) {
      digitalWrite(bitD, HIGH);
     }else
    {
      digitalWrite(bitD, LOW);
    }
     //bit C
    if (n % 8 > 3) {
      digitalWrite(bitC, HIGH);
    }else
    {
      digitalWrite(bitC, LOW);
    }
     //bit B
    if (n % 16 > 7) {
      digitalWrite(bitB, HIGH);
    }else
    {
      digitalWrite(bitB, LOW);
    }
     //bit A
    if (n % 32 > 15) {
      digitalWrite(bitA, HIGH);
    }else
    {
      digitalWrite(bitA, LOW);
    }
    delay(2000);
  }
}


void loop()
{
  
}
```

### Counting in different bases
Different bases have different numbers but similar patterns. 

| decimal | binary | base three | base five | base eight |
|---------|--------|------------|-----------|------------|
| 0       | 0      | 0          | 0         | 0          |
| 1       | 1      | 1          | 1         | 1          |
| 2       | 10     | 2          | 2         | 2          |
| 3       | 11     | 10         | 3         | 3          |
| 4       | 100    | 11         | 4         | 4          |
| 5       | 101    | 12         | 10        | 5          |
| 6       | 110    | 20         | 11        | 6          |
| 7       | 111    | 21         | 12        | 7          |
| 8       | 1000   | 22         | 13        | 10         |
| 9       | 1001   | 100        | 14        | 11         |
| 10      | 1010   | 101        | 20        | 12         |

### Boolean Operators

### Logic Gates
