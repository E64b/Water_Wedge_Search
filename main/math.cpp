void math()
{
	if ((data.pressure / data.meter) > data.depth) //≈сли давление кратно метру водного столба, прибавл€ем метр к глубине погружени€
	{
		data.depth++;
		data.diving = true; //≈сли значение увеличиваетс€, мы погружаемс€ 
	}

	while (sensor.pressure() < data.meter) //ѕока мы не погрузились на глубину больше метра, ничего не измер€ем
	{

	}
}