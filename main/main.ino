#define AP_SSID ""
#define AP_PASS ""

void setup()
{
	GyverNTC ntc(A0, 100000, 3950, 25, 10180);
	sensor.initializeMS_5803(true)
	data.depth = 0; 
}

void loop()
{
	ReadSens(); //—читываем датчики
	math(); //—читаем что нам нужно
}