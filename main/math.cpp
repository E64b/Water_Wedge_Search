void math()
{
	if ((data.pressure / data.meter) > data.depth) //���� �������� ������ ����� ������� ������, ���������� ���� � ������� ����������
	{
		data.depth++;
		data.diving = true; //���� �������� �������������, �� ����������� 
	}

	while (sensor.pressure() < data.meter) //���� �� �� ����������� �� ������� ������ �����, ������ �� ��������
	{

	}
}