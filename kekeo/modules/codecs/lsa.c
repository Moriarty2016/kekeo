/*	Benjamin DELPY `gentilkiwi`
	http://blog.gentilkiwi.com
	benjamin@gentilkiwi.com
	Licence : https://creativecommons.org/licenses/by-nc-sa/4.0/
*/
#include "lsa.h"

BOOL kiwi_lsa_write(KRB_CRED *cred, OssBuf *output)
{
	return kiwi_krbcred_write(cred, output);
}