/*
 ***********************************************************************
 *                                                                      
 *                           Coryright (c)                              
 *    � Digital Equipment Corporation 1996, 1997. All rights reserved.        
 *                                                                      
 *    Restricted Rights: Use, duplication, or disclosure by the U.S.    
 *    Government is subject to restrictions as set forth in subparagraph
 *    (c) (1) (ii) of DFARS 252.227-7013, or in FAR 52.227-19, or in FAR
 *    52.227-14 Alt. III, as applicable.                                
 *                                                                      
 *    This software is proprietary to and embodies the confidential     
 *    technology of Digital Equipment Corporation and other parties.    
 *    Possession, use, or copying of this software and media is authorized
 *    only pursuant to a valid written license from Digital or an        
 *    authorized sublicensor.                                            
 *                                                                       
 *********************************************************************** 
 *    File Name:	l_com_ph.h
 *    Author:		Matthew Schnee                                         
 *    Creation Date:02/06/96                                                   
 *                                                                             
 *    Functionality:                                                           
 *    common control phonemes that must be present in all 
 *    languages at these values ...
 *                                                                             
 ***********************************************************************       
 *                                                                             
 * Rev	Who		Date			Description                    
 * ---	-----	-----------		---------------------------------------
 * 001	MGS		02/08/1996		Moved com_phon.h to l_com_ph.h    
 * 002	GL		11/17/1997		add LINKRWORD for UK English    
 * 003	GL		06/29/1998		BATS#702 add	DOUBLCONS for German    
 * 
 */
 
#ifndef LCOMPHH
#define LCOMPHH

#define	BLOCK_RULES		(100)			/* Block allophone substitutes.	*/
#define	S3				(100+ 1)		/* Tertiary stress */
#define	S2				(100+ 2)		/* Secondary stress		*/
#define	S1				(100+ 3)		/* Primary stress		*/
#define	SEMPH			(100+ 4)		/* Emphatic stress		*/
#define	HAT_RISE		(100+ 5)		/* Explicit hat rise		*/
#define	HAT_FALL		(100+ 6)		/* Explicit hat fall		*/
#define	HAT_RF			(100+ 7)		/* Explicit hat rise-fall	*/
#define	SBOUND			(100+ 8)		/* Syllable boundary		*/
#define	MBOUND			(100+ 9)		/* Morpheme boundary		*/
#define	HYPHEN			(100+10)		/* For noun compounds		*/
#define	WBOUND			(100+11)		/* Word boundary		*/
#define	PPSTART			(100+12)		/* Prep phrase start		*/
#define	VPSTART			(100+13)		/* Verb phrase start		*/
#define	RELSTART		(100+14)		/* Intro. to sentence or clause	*/
#define	COMMA			(100+15)		/* end of clause		*/
#define	PERIOD			(100+16)		/* End of sentence		*/
#define	QUEST			(100+17)		/* End of question		*/
#define	EXCLAIM			(100+18)		/* End of exclamatory sentence!	*/
#define	NEW_PARAGRAPH	(100+19)		/* Explicit new paragraph	*/
#define	SPECIALWORD		(100+20)    	/* Special word in citation mode */

#ifdef ENGLISH_UK
#define	LINKRWORD		(100+21)    	/* Special word in citation mode */
#endif

#ifdef GERMAN
#define	DOUBLCONS		(100+21)    	/* For double consonant marker */
#endif

#define MAXI_PHONES		57				/* maximum phoneme code used in cm_copt.*/
#endif /* ifndef LCOMPHH */

