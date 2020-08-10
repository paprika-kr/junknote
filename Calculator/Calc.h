#pragma once
#ifndef __CALCULATOR__
#define __CALCULATOR__

#include <iostream>
using namespace std;

class Calc
{
private:
	int* cnt = new int[4];

public:
	void Init();
	void ShowOpCount();
	float Add(float x, float y);
	float Min(float x, float y);
	float Mul(float x, float y);
	float Div(float x, float y);
};

inline void Calc::Init()
{
	for (int i = 0; i < 4; i++)
		cnt[i] = 0;
}

inline void Calc::ShowOpCount()
{
	cout << "µ¡¼À: " << cnt[0] << " »¬¼À: " << cnt[1] << " °ö¼À: " << cnt[2] << " ³ª´°¼À: " << cnt[3] << endl;
}
#endif