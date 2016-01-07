    int r = 0; //define variable for the random number(s)

    void setup() {
    // setup code here, to run once:
    randomSeed(analogRead(0));//Prepare analog pin
    Serial.begin(9600);//intialize serial line

    }

    void loop() {
    // put your main code here, to run repeatedly:
    Serial.print("Random number between 0 and 500: ");//Send message
    r = random(0, 501);//generate a random number BETWEEN 0 and 500
    Serial.println(r);//Send the number
    delay(1000);//Wait one second

    }
