#pragma once
#pragma pack(1, push)

#include <Wire.h>
#include <MS5803_05.h>
#include <GyverNTC.h>
#include <WiFi.h>
#include <GyverPortal.h>
#include <avr/io.h>
#include <Arduino.h>

typedef struct{
float temp;
uint8_t depth;
float pressure;
const float meter = 0.098064;

bool diving;
bool pulling;
}UIState;

extern UIState data;

extern MS_5803 sensor = MS_5803(512);

#pragma pack(pop)