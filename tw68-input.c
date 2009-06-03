/*
 *  tw68_input.c
 *  Part of the device driver for Techwell 68xx based cards
 *  
 *  Much of this code is derived from the cx88 and sa7134 drivers, which
 *  were in turn derived from the bt87x driver.  The original work was by
 *  Gerd Knorr; more recently the code was enhanced by Mauro Carvalho Chehab,
 *  Hans Verkuil, Andy Walls and many others.  Their work is gratefully
 *  acknowledged.  Full credit goes to them - any problems within this code
 *  are mine.
 *
 *  Copyright (C) 2009  William M. Brack <wbrack@mmm.com.hk>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA
 */

#include "tw68.h"

int tw68_input_init1(struct tw68_dev *dev)
{
	return 0;
}

void tw68_input_fini(struct tw68_dev *dev)
{
	return;
}

void tw68_input_irq(struct tw68_dev *dev)
{
	return;
}

void tw68_set_i2c_ir(struct tw68_dev *dev, struct IR_i2c *ir)
{
	return;
}

void tw68_ir_start(struct tw68_dev *dev, struct card_ir *ir)
{
	return;
}

void tw68_ir_stop(struct tw68_dev *dev)
{
	return;
}

