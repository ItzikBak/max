#pragma once

template <typename T>
T& max(T& a, T& b, T& c)
{
	if(a >= b)
		return (a >= c) ? a : c;
	else
		return (b >= c) ? b : c;
}
