/***************************************************************************
    File                 : nsl_sf_kernel.h
    Project              : LabPlot
    Description          : NSL special kernel functions
    --------------------------------------------------------------------
    Copyright            : (C) 2016 by Stefan Gerlach (stefan.gerlach@uni.kn)

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; either version 2 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor,                    *
 *   Boston, MA  02110-1301  USA                                           *
 *                                                                         *
 ***************************************************************************/

#ifndef NSL_SF_KERNEL_H
#define NSL_SF_KERNEL_H

#include <stdlib.h>

/* see https://en.wikipedia.org/wiki/Kernel_%28statistics%29 */

/* uniform */
double nsl_sf_kernel_uniform(double u);
/* triangular */
double nsl_sf_kernel_triangular(double u);
/* parabolic (Epanechnikov) */
double nsl_sf_kernel_parabolic(double u);
/* quartic (biweight) */
double nsl_sf_kernel_quartic(double u);
/* triweight */
double nsl_sf_kernel_triweight(double u);
/* tricube */
double nsl_sf_kernel_tricube(double u);
/* cosine */
double nsl_sf_kernel_cosine(double u);
/* TODO: Gaussian, Logistic, Sigmoid, Silverman */

#endif /* NSL_SF_KERNEL_H */
