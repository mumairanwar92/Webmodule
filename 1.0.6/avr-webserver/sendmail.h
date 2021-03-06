/*----------------------------------------------------------------------------
 Copyright:      Radig Ulrich  mailto: mail@ulrichradig.de
 Author:         Radig Ulrich + W.Wallucks
 Remarks:        
 known Problems: none
 Version:        09.06.2008
 Description:    Send MAIL Client

 Dieses Programm ist freie Software. Sie k�nnen es unter den Bedingungen der 
 GNU General Public License, wie von der Free Software Foundation ver�ffentlicht, 
 weitergeben und/oder modifizieren, entweder gem�� Version 2 der Lizenz oder 
 (nach Ihrer Option) jeder sp�teren Version. 

 Die Ver�ffentlichung dieses Programms erfolgt in der Hoffnung, 
 da� es Ihnen von Nutzen sein wird, aber OHNE IRGENDEINE GARANTIE, 
 sogar ohne die implizite Garantie der MARKTREIFE oder der VERWENDBARKEIT 
 F�R EINEN BESTIMMTEN ZWECK. Details finden Sie in der GNU General Public License. 

 Sie sollten eine Kopie der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. 
 Falls nicht, schreiben Sie an die Free Software Foundation, 
 Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA. 
------------------------------------------------------------------------------*/

/**
 * \addtogroup mail	Sendmail Client
 *
 * @{
  */

/**
 * \file
 * sendmail
 *
 * \author W.Wallucks
 */

/**
 * @}
 */

#if USE_MAIL
#ifndef _SENDMAIL_H
	#define _SENDMAIL_H

    #define SMTP_PORT 25	// Port des EMAIL-SERVERS
    
	void sendmail_init(void);
	uint8_t sendmail(uint8_t);

#endif //_SENDMAIL_H
#endif //USE_MAIL


