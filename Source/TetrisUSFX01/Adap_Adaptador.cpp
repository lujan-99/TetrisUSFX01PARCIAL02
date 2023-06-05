// Fill out your copyright notice in the Description page of Project Settings.


#include "Adap_Adaptador.h"

UAdap_Adaptador::UAdap_Adaptador(): Super()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAdap_Adaptador::SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento)
{
	Ancho = _ZMovimiento;
	Alto = _YMovimiento;
	Profundidad = _XMovimiento;
}
