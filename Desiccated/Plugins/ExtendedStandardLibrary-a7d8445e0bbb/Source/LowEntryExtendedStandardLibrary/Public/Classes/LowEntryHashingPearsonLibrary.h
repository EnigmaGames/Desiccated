#pragma once


#include "Engine.h"


class ULowEntryHashingPearsonLibrary
{
private:
	const static uint8 pearson[256];


public:
	static TArray<uint8> Hash(const TArray<uint8>& Bytes, const int32 HashLength);
	static TArray<uint8> Hash(const TArray<uint8>& Bytes, int32 Index, int32 Length, const int32 HashLength);
};
