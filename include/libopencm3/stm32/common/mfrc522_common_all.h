/** @addtogroup mfrc522_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2022 Patrick Baumgart <nerd@bauminao.de>
 *
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2022 Patrick Baumgart <nerd@bauminao.de>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA MFRC522.H
The order of header inclusion is important. mfrc522.h includes the device
specific memorymap.h header before including this header file.*/


/*******************************************************************************
 * Some details about this:
 * * I didn't invent this rather took an opensource library from Arduino into
 *   this framework. 
 *
 * * Original Source is: <https://github.com/miguelbalboa/rfid.git>
 *
 * * I faced a lot of problems due to lack of knowledge how to combine
 *   arduino.h with libopencm3. And as the contents of all this is rather simple
 *   I decided to add it to an "own" additional library direct into libopencm3.
 *
 * * As this is nothing dependend on the hardware, you use SPI to communicate
 *   to the external reader, a one-fits-all library should work. And with this, 
 *   I tried my best to add it as common as possible. I used the part of "spi.h"
 *   as a kind of template. 
 *
 * * If someone ever finds/uses this code, please just give me a hint as I would 
 *   be very happy to see it was not only for myself. 
 *
 ******************************************************************************/

/** @cond */
#if defined(LIBOPENCM3_MFRC522_H)
/** @endcond */
#ifndef LIBOPENCM3_MFRC522_COMMON_ALL_H
#define LIBOPENCM3_MFRC522_COMMON_ALL_H

/**@{*/


/****************************************************************************/
#ifndef MFRC522_SPICLOCK
#define MFRC522_SPICLOCK (4000000u)	// MFRC522 accept upto 10MHz, set to 4MHz.
#endif

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS


END_DECLS


#endif
/** @cond */
#else
#warning "mfrc522_common_all.h should not be included explicitly, only via mfrc522.h"
#endif
/** @endcond */

