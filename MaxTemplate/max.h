#pragma once

template <typename T, typename COMP>
T& compare(T& a, T& b, COMP comp)
{
	return comp(a,b);
}
