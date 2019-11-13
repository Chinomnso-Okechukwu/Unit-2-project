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
