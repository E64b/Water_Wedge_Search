void ReadSens(){
	data.pressure = sensor.pressure(); //�������� ��������
	data.temp += (ntc.getTemp() - data.temp) * 0.1; //�������� �����������	
}