#ifndef CONSOLE_HPP
#ifndef CONSOLE_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !CONSOLE_H */
#endif /* !CONSOLE_HPP */

/******************************************************************************\
|* TEXT AT THE CURSOR. EVERY BYTE GOES THROUGH FEED() (UTILS/TEXT.INL). WHEN  *|
|* OUTPUT IS NOT A TERMINAL THE BYTES ARE ALSO WRITTEN AS THEY ARE, SO A      *|
|* REDIRECTED LOG IS PLAIN TEXT WITH NO ESCAPE CODES IN IT.                   *|
\******************************************************************************/

#define LOCALMACRO__CMT_CONSOLE__LOG_CONTENT \
	const unsigned char	*__CMT_LOG__ = (const unsigned char *)(STRING);\
	\
	if (__CMT_LOG__)\
	{\
		LOCALMACRO__CMT_CONSOLE__ENTER\
		LOCALMACRO__CMT_CONSOLE__BATCH_BEGIN\
		\
		if (!THIS->_ACTIVE)\
		{\
			const unsigned char	*__CMT_LOG_RAW__ = __CMT_LOG__;\
			\
			while (*__CMT_LOG_RAW__)\
			{\
				LOCALMACRO__CMT_CONSOLE__OUT_BYTE(*__CMT_LOG_RAW__)\
				++__CMT_LOG_RAW__;\
			}\
		}\
		\
		while (*__CMT_LOG__)\
		{\
			LOCALMACRO__CMT_CONSOLE__FEED(*__CMT_LOG__)\
			++__CMT_LOG__;\
		}\
		\
		LOCALMACRO__CMT_CONSOLE__BATCH_END\
	}

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
