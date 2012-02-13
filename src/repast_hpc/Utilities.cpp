/*
 *   Repast for High Performance Computing (Repast HPC)
 *
 *   Copyright (c) 2010 Argonne National Laboratory
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with
 *   or without modification, are permitted provided that the following
 *   conditions are met:
 *
 *     Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *     Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 *     Neither the name of the Argonne National Laboratory nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 *   PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE TRUSTEES OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *   EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 *  Utilities.cpp
 *
 *  Created on: Oct 27, 2009
 *      Author: nick
 */

#include "Utilities.h"

#include <sstream>
#include <stdexcept>

using namespace std;

namespace repast {

Timer::Timer() : startTime(0) {}

void Timer::start() {
	startTime = clock();
}

long double Timer::stop() {
	long double diff = clock() - startTime;
	startTime = 0;
	return diff / CLOCKS_PER_SEC;
}

void tokenize(const string& str, vector<string>& tokens, const string& delimiters) {
	// Skip delimiters at beginning.
	string::size_type lastPos = str.find_first_not_of(delimiters, 0);
	// Find first "non-delimiter".
	string::size_type pos = str.find_first_of(delimiters, lastPos);

	while (string::npos != pos || string::npos != lastPos) {
		// Found a token, add it to the vector.
		tokens.push_back(str.substr(lastPos, pos - lastPos));
		// Skip delimiters.  Note the "not_of"
		lastPos = str.find_first_not_of(delimiters, pos);
		// Find next "non-delimiter"
		pos = str.find_first_of(delimiters, lastPos);
	}
}

string trim(const string& str) {
	size_t start = str.find_first_not_of(" \t\n\r");
	if (start == string::npos) return "";
	size_t endpos = str.find_last_not_of(" \t\n\r");
	return str.substr(start, endpos - start + 1);
}

boost::uint32_t strToUInt(const string& val) {
	boost::uint32_t i;
	istringstream stream(val);
	if (stream >> i)
		return i;
	else
		throw invalid_argument("Expecting int but received '" + val + "'");
}

int strToInt(const string& val) {
	int i;
	istringstream stream(val);
	if (stream >> i)
		return i;
	else
		throw invalid_argument("Expecting int but received '" + val + "'");
}

double strToDouble(const string& val) {
	double i;
	istringstream stream(val);
	if (stream >> i)
		return i;
	else
		throw invalid_argument("Expecting double but received '" + val + "'");
}

}
