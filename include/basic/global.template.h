/*
 * Copyright 2009-2011 Zamin Iqbal and Mario Caccamo 
 * 
 * CORTEX project contacts:  
 * 		M. Caccamo (mario.caccamo@bbsrc.ac.uk) and 
 * 		Z. Iqbal (zam@well.ox.ac.uk)
 *
 * Development team: 
 *       R. Ramirez-Gonzalez (Ricardo.Ramirez-Gonzalez@bbsrc.ac.uk)
 *       R. Leggett (richard@leggettnet.org.uk)
 * **********************************************************************
 *
 * This file is part of CORTEX.
 *
 * CORTEX is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CORTEX is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CORTEX.  If not, see <http://www.gnu.org/licenses/>.
 *
 * **********************************************************************
 */
 
#ifndef GLOBAL_H_
#define GLOBAL_H_


typedef signed char boolean;
#ifndef true
#define true 1
#define false 0
#endif

typedef enum{
  forward = 0,
  reverse = 1,
  undefined = 3,
} Orientation;



#define LENGTH_FILENAME 300
#define VERSION 1.00
#ifndef MAX_READ_LENGTH
#define MAX_READ_LENGTH 20000
#endif
#define MAX_FILENAME_LENGTH 200
//boolean DEBUG;

#ifndef DEBUG
#define DEBUG  0
#endif

#define SVN_VERSION "SVN_VERSION_TAG\n"
#define SVN_COMMIT_DATE "SVN_COMMIT_DATE_TAG\n"



#endif /* GLOBAL_H_ */
