#include <ArduinoJson.h>

void setup() {
  DynamicJsonDocument doc(1024);

  String input =
      "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";
  deserializeJson(doc, input);
  
  JsonObject obj = doc.as<JsonObject>();
  
  long time = obj[String("time")];


  obj[String("time")] = time;
  String sensor = obj["sensor"];


  sensor = obj["sensor"].as<String>();


  obj["sensor"] = sensor;


  obj["sensor"] = serialized(sensor);


  obj[String("sen") + "sor"] = String("gp") + "s";

  if (obj["sensor"] == sensor) {

  }
  String output;
  serializeJson(doc, output);
}

void loop() {

}
