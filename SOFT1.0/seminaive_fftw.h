/***************************************************************************
  **************************************************************************
  
                Spherical Harmonic Transform Kit 2.6
  
   Sean Moore, Dennis Healy, Dan Rockmore, Peter Kostelec
   smoore@bbn.com, {healy,rockmore,geelong}@cs.dartmouth.edu
  
   Contact: Peter Kostelec
            geelong@cs.dartmouth.edu
  
  
   Copyright 1997-2003  Sean Moore, Dennis Healy,
                        Dan Rockmore, Peter Kostelec
  
  
     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2 of the License, or
     (at your option) any later version.
  
     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.
  
     You should have received a copy of the GNU General Public License
     along with this program; if not, write to the Free Software
     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  
  
   Commercial use is absolutely prohibited.
  
   See the accompanying LICENSE file for details.
  
  ************************************************************************
  ************************************************************************/


#ifndef _SEMINAIVE_FFTW_H
#define _SEMINAIVE_FFTW_H

extern void SemiNaiveReduced_fftw( double * ,
			      int , 
			      int , 
			      double * , 
			      double * ,
			      double * ,
			      double * ) ;
extern void SemiNaiveReduced_fftw( float * ,
			      int , 
			      int , 
			      float * , 
			      float * ,
			      float * ,
			      float * ) ;

extern void InvSemiNaiveReduced_fftw( double * ,
				 int , 
				 int , 
				 double * , 
				 double * ,
				 double * ,
				 double * ) ;
extern void InvSemiNaiveReduced_fftw( float * ,
				 int , 
				 int , 
				 float * , 
				 float * ,
				 float * ,
				 float * ) ;

#endif /* _SEMINAIVE_FFTW_H */
