/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009, Willow Garage Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef _testhypothesesfilter_h_
#define _testhypothesesfilter_h_

#include "NCVTest.hpp"
#include "NCVTestSourceProvider.hpp"


class TestHypothesesFilter : public NCVTestProvider
{
public:

    TestHypothesesFilter(std::string testName, NCVTestSourceProvider<Ncv32u> &src,
                         Ncv32u numDstRects, Ncv32u minNeighbors, Ncv32f eps);

    virtual bool init();
    virtual bool process();
    virtual bool deinit();
    virtual bool toString(std::ofstream &strOut);

private:

    TestHypothesesFilter(const TestHypothesesFilter&);
    TestHypothesesFilter& operator=(const TestHypothesesFilter&);

    NCVTestSourceProvider<Ncv32u> &src;
    Ncv32u numDstRects;
    Ncv32u minNeighbors;
    Ncv32f eps;

    Ncv32u canvasWidth;
    Ncv32u canvasHeight;
};

#endif // _testhypothesesfilter_h_