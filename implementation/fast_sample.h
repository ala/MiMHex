#ifndef FAST_SAMPLE_H_
#define FAST_SAMPLE_H_

#include <string>

#include "positions.h"

typedef unsigned char uchar;

namespace Hex {

class FastSample {
public:
	FastSample(double *gammas = 0);
	void FillGammas(double *gammas);

	std::string ToAsciiArt();

	void Change(uint position, double *new_gammas, bool);
	void Change(uint normal_position, double *new_gammas);
	void Change(uint row, uint column, double *new_gammas);
	void Change(const std::string &position, double *new_gammas);

	uint Random() const;

	double get_all_sum() const;

private:
	double _gammas[kBoardSizeAligned * kBoardSizeAligned], _rows[kBoardSizeAligned];
	double all_sum;
	uchar _used_fields[kBoardSizeAligned * kBoardSizeAligned];
};

}
#endif
