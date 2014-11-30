 /* fre:ac - free audio converter
  * Copyright (C) 2001-2014 Robert Kausch <robert.kausch@freac.org>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef H_FREAC_FILTER_IN_WAVE
#define H_FREAC_FILTER_IN_WAVE

#include "inputfilter.h"

namespace BonkEnc
{
	class BEEXPORT FilterInWAVE : public InputFilter
	{
		private:
			Bool	 floatFormat;
			Int	 floatFormatBits;
		public:
				 FilterInWAVE(Config *, Track *);
				~FilterInWAVE();

			Bool	 Activate();
			Bool	 Deactivate();

			Int	 ReadData(Buffer<UnsignedByte> &, Int);

			Track	*GetFileInfo(const String &);
	};
};

#endif
