#include "Calc.h"

float Calc::Add(float x, float y)
{
	cnt[0]++;
	return x + y;
}

float Calc::Min(float x, float y)
{
	cnt[1]++;
	return x - y;
}

float Calc::Mul(float x, float y)
{
	cnt[2]++;
	return x * y;
}

float Calc::Div(float x, float y) 
{
	cnt[3]++;
	return x / y;
}