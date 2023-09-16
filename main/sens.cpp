void ReadSens(){
	data.pressure = sensor.pressure(); //Измеряем давление
	data.temp += (ntc.getTemp() - data.temp) * 0.1; //Измеряем температуру	
}