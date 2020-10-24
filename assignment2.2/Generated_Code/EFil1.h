/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : EFil1.h
**     Project     : assignment2.2
**     Processor   : MK20DX128VLH5
**     Component   : ExternalFile
**     Version     : Component 02.033, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-10-24, 22:33, # CodeGen: 21
**     Abstract    :
**         This component implements a programming support tool for
**         including an external binary file to the project.
**         The binary file is here represented as a constant array
**         of 8-bit values.
**         Single elements are indexed from '0' to 'GetSize() - 1'.
**     Settings    :
**          Component name                                 : EFil1
**          File name                                      : Sources\drawing_file.TXT
**     Contents    :
**         GetSize  - uint32_t EFil1_GetSize(void);
**         GetAddr  - const uint8_t* EFil1_GetAddr(void);
**         GetValue - uint8_t EFil1_GetValue(uint32_t Index);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file EFil1.h
** @version 01.00
** @brief
**         This component implements a programming support tool for
**         including an external binary file to the project.
**         The binary file is here represented as a constant array
**         of 8-bit values.
**         Single elements are indexed from '0' to 'GetSize() - 1'.
*/         
/*!
**  @addtogroup EFil1_module EFil1 module documentation
**  @{
*/         

#ifndef __EFil1
#define __EFil1


/* MODULE EFil1. */

#include "Cpu.h"
uint32_t EFil1_GetSize(void);
/*
** ===================================================================
**     Method      :  EFil1_GetSize (component ExternalFile)
**     Description :
**         This method returns the number of elements of the array
**         representing the binary file (= length of the file in
**         bytes).
**     Parameters  : None
**     Returns     :
**         ---             - Size of the array
** ===================================================================
*/

uint8_t* EFil1_GetAddr(void);
/*
** ===================================================================
**     Method      :  EFil1_GetAddr (component ExternalFile)
**     Description :
**         This method returns a pointer to the array of values
**         representing the binary file (e.g. pointer to the first
**         element of the array).
**     Parameters  : None
**     Returns     :
**         ---             - Pointer to the constant array
** ===================================================================
*/

uint8_t EFil1_GetValue(uint32_t Idx);
/*
** ===================================================================
**     Method      :  EFil1_GetValue (component ExternalFile)
**     Description :
**         This method returns an element (one byte) of the array
**         representing the binary file. The values are numbered
**         from zero (index=0 and more).
**     Parameters  :
**         NAME            - DESCRIPTION
**         Idx             - Index of the element (0 to
**                           53)
**     Returns     :
**         ---             - Value of the array element
** ===================================================================
*/


/* END EFil1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

#endif /* ifndef __EFil1 */
