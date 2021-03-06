/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright (c) 1996 by Sun Microsystems, Inc.
 */


#ifndef _COMMON_DEF_H_
#define	_COMMON_DEF_H_

#include "common_han.h"

#define MAGIC_NUMBER            0x4321
		/* for iconv security reason */

#define UTF8_NON_ID_CHAR            0x00EFBFBD
#define NON_ID_CHAR            	    '?'
		/* Standard replacement characters */

#define	NON_IDENTICAL		'?'
		/* in case of non-maching code */

typedef struct _hcode_table {
        unsigned short code;
        hcode_type utf8;
} hcode_table;

#endif	/* _COMMON_DEF_H_ */
