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
Those are the three phases of the traffic light.

![TrafficLight](redlight.png)
**Fig. 1** This diagram shows the red light on indicating STOP.

![TrafficLight](amberlight.png)
**Fig. 2** This diagram shows the amber light on indicating GET READY.

![TrafficLight](greenlight.png)
**Fig. 3** This diagram shows the green light on indicating GO.
