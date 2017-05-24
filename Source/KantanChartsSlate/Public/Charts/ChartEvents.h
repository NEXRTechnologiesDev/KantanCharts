// Copyright (C) 2015-2017 Cameron Angus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


namespace KantanCharts
{
	enum class EChartInteractionArea: uint8 {
		Plot,
		XAxis,
		YAxis,
	};

	DECLARE_DELEGATE_TwoParams(FOnInteractionMouseDown, EChartInteractionArea, const FPointerEvent&);
//	DECLARE_DELEGATE_TwoParams(FOnInteractionAxisPan, EAxis::Type, );
}