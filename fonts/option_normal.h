#ifndef OPTION_NORMAL_FONT_H
#define OPTION_NORMAL_FONT_H

#include <stdint.h>

const uint8_t optionNormalFontBitmaps[] = 
{
	// @0 '!' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @18 '"' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @36 '#' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @72 '%' (18 pixels wide)
	0x00, 0x00, 0x00, //                   
	0x00, 0x00, 0x00, //                   
	0xFC, 0x30, 0x00, // ######    ##      
	0xFC, 0x30, 0x00, // ######    ##      
	0xCC, 0x30, 0x00, // ##  ##    ##      
	0xCC, 0x30, 0x00, // ##  ##    ##      
	0xFC, 0xC0, 0x00, // ######  ##        
	0xFC, 0xC0, 0x00, // ######  ##        
	0x00, 0xCF, 0xC0, //         ##  ######
	0x00, 0xCF, 0xC0, //         ##  ######
	0x03, 0x0C, 0xC0, //       ##    ##  ##
	0x03, 0x0C, 0xC0, //       ##    ##  ##
	0x03, 0x0F, 0xC0, //       ##    ######
	0x03, 0x0F, 0xC0, //       ##    ######
	0x00, 0x00, 0x00, //                   
	0x00, 0x00, 0x00, //                   
	0x00, 0x00, 0x00, //                   
	0x00, 0x00, 0x00, //                   

	// @126 ''' (2 pixels wide)
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @144 '(' (4 pixels wide)
	0x30, //   ##
	0x30, //   ##
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0x30, //   ##
	0x30, //   ##
	0x00, //     
	0x00, //     

	// @162 ')' (4 pixels wide)
	0xC0, // ##  
	0xC0, // ##  
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0xC0, // ##  
	0xC0, // ##  
	0x00, //     
	0x00, //     

	// @180 '*' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x3F, 0x00, //   ######  
	0x3F, 0x00, //   ######  
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @216 '+' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @252 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##

	// @270 '-' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @288 '.' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @306 '/' (6 pixels wide)
	0x00, //
	0x0C, //     ##
	0x0C, //     ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x60, //  ##   
	0x60, //  ##   
	0x60, //  ##   
	0xC0, // ##    
	0xC0, // ##    
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @324 '0' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @342 '1' (4 pixels wide)
	0x00, //         
	0xF0, // ####
	0xF0, // ####
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @360 '2' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @378 '3' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x3F, //   ######
	0x3F, //   ######
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @396 '4' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @414 '5' (8 pixels wide)
	0x00, //        
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @432 '6' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##     
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @450 '7' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @468 '8' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @486 '9' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @504 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @522 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##

	// @540 '<' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x03, 0xC0, //       ####
	0x03, 0xC0, //       ####
	0x3C, 0x00, //   ####    
	0x3C, 0x00, //   ####    
	0xC0, 0x00, // ##        
	0xC0, 0x00, // ##        
	0x3C, 0x00, //   ####    
	0x3C, 0x00, //   ####    
	0x03, 0xC0, //       ####
	0x03, 0xC0, //       ####
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @576 '=' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @594 '>' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0xF0, 0x00, // ####      
	0xF0, 0x00, // ####      
	0x0F, 0x00, //     ####  
	0x0F, 0x00, //     ####  
	0x00, 0xC0, //         ##
	0x00, 0xC0, //         ##
	0x0F, 0x00, //     ####  
	0x0F, 0x00, //     ####  
	0xF0, 0x00, // ####      
	0xF0, 0x00, // ####      
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @630 '?' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x3F, //   ######
	0x3F, //   ######
	0x30, //   ##    
	0x30, //   ##    
	0x00, //         
	0x00, //         
	0x30, //   ##    
	0x30, //   ##    
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @648 '@' (14 pixels wide)
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0xC0, 0x0C, // ##          ##
	0xC0, 0x0C, // ##          ##
	0xCF, 0xCC, // ##  ######  ##
	0xCF, 0xCC, // ##  ######  ##
	0xCC, 0xCC, // ##  ##  ##  ##
	0xCC, 0xCC, // ##  ##  ##  ##
	0xCF, 0xFC, // ##  ##########
	0xCF, 0xFC, // ##  ##########
	0xC0, 0x00, // ##            
	0xC0, 0x00, // ##            
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @684 'A' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @702 'B' (8 pixels wide)
	0x00, //         
	0xFC, // ######  
	0xFC, // ######  
	0xCC, // ##  ##  
	0xCC, // ##  ##  
	0xCC, // ##  ##  
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @720 'C' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @738 'D' (8 pixels wide)
	0x00, //         
	0xFE, // ####### 
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFE, // ####### 
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @756 'E' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFC, // ######  
	0xFC, // ######  
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @774 'F' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFC, // ######  
	0xFC, // ######  
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @792 'G' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xCF, // ##  ####
	0xCF, // ##  ####
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @810 'H' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @828 'I' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @846 'J' (6 pixels wide)
	0x00, //       
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0xFC, // ######
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @864 'K' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFC, // ######  
	0xFC, // ######  
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @882 'L' (8 pixels wide)
	0x00, //         
	0xC0, // ##       
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @900 'M' (14 pixels wide)
	0x00, 0x00, //               
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @936 'N' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @954 'O' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @972 'P' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @990 'Q' (10 pixels wide)
	0x00, 0x00, //
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xCC, 0xC0, // ##  ##  ##
	0xCC, 0xC0, // ##  ##  ##
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1026 'R' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFC, // ######  
	0xFC, // ######  
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1044 'S' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##       
	0xC0, // ##     
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1062 'T' (10 pixels wide)
	0x00, 0x00, //           
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##     
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1098 'U' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1116 'V' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x3C, //   ####  
	0x3C, //   ####  
	0x3C, //   ####  
	0x3C, //   ####  
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1134 'W' (14 pixels wide)
	0x00, 0x00, //               
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @1170 'X' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x3C, //   ####  
	0x3C, //   ####  
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1188 'Y' (10 pixels wide)
	0x00, 0x00, //           
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xC0, 0xC0, // ##      ##
	0xFF, 0xC0, // ##########
	0xFF, 0xC0, // ##########
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1224 'Z' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x3C, //   ####  
	0x3C, //   ####  
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1242 '[' (4 pixels wide)
	0xF0, // ####
	0xF0, // ####
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xF0, // ####
	0xF0, // ####
	0x00, //     
	0x00, //     

	// @1260 '\' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xC0, // ##    
	0xC0, // ##    
	0xC0, // ##    
	0xC0, // ##    
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x0C, //     ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @1278 ']' (4 pixels wide)
	0xF0, // ####
	0xF0, // ####
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0xF0, // ####
	0xF0, // ####
	0x00, //     
	0x00, //     

	// @1296 '^' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x30, //   ##  
	0x30, //   ##  
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @1314 '_' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         

	// @1332 '`' (2 pixels wide)
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @1350 'a' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1368 'b' (8 pixels wide)
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1386 'c' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC0, // ##      
	0xC0, // ##      
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1404 'd' (8 pixels wide)
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1422 'e' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1440 'f' (8 pixels wide)
	0x3F, //   ######
	0x3F, //   ######
	0x30, //   ##    
	0x30, //   ##    
	0xFC, // ######  
	0xFC, // ######  
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x30, //   ##    
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1458 'g' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########

	// @1476 'h' (8 pixels wide)
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1494 'i' (2 pixels wide)
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @1512 'j' (2 pixels wide)
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##

	// @1530 'k' (8 pixels wide)
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFC, // ######  
	0xFC, // ######  
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1548 'l' (2 pixels wide)
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @1566 'm' (14 pixels wide)
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @1602 'n' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1620 'o' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1638 'p' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      

	// @1656 'q' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##

	// @1674 'r' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1692 's' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1710 't' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x30, //   ##  
	0x30, //   ##  
	0xFC, // ######
	0xFC, // ######
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x3C, //   ####
	0x3C, //   ####
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @1728 'u' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1746 'v' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x3C, //   ####  
	0x3C, //   ####  
	0x3C, //   ####  
	0x3C, //   ####  
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1764 'w' (14 pixels wide)
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xC3, 0x0C, // ##    ##    ##
	0xFF, 0xFC, // ##############
	0xFF, 0xFC, // ##############
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @1800 'x' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x3C, //   ####  
	0x3C, //   ####  
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1818 'y' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##
	0x03, //       ##

	// @1836 'z' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x03, //       ##
	0x3C, //   ####  
	0x3C, //   ####  
	0xC0, // ##      
	0xC0, // ##      
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @1854 '|' (2 pixels wide)
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
};

const FONT_CHAR_INFO optionNormalFontDescriptors[] = 
{
	{2, 0}, 		// ! 
	{6, 18}, 		// " 
	{10, 36}, 		// # 
	{0, 0}, 		// $ 
	{18, 72}, 		// % 
	{0, 0}, 		// & 
	{2, 126}, 		// ' 
	{4, 144}, 		// ( 
	{4, 162}, 		// ) 
	{10, 180}, 		// * 
	{10, 216}, 		// + 
	{2, 252}, 		// , 
	{8, 270}, 		// - 
	{2, 288}, 		// . 
	{6, 306}, 		// / 
	{8, 324}, 		// 0 
	{4, 342}, 		// 1 
	{8, 360}, 		// 2 
	{8, 378}, 		// 3 
	{8, 396}, 		// 4 
	{8, 414}, 		// 5 
	{8, 432}, 		// 6 
	{8, 450}, 		// 7 
	{8, 468}, 		// 8 
	{8, 486}, 		// 9 
	{2, 504}, 		// : 
	{2, 522}, 		// ; 
	{10, 540}, 		// < 
	{8, 576}, 		// = 
	{10, 594}, 		// > 
	{8, 630}, 		// ? 
	{14, 648}, 		// @ 
	{8, 684}, 		// A 
	{8, 702}, 		// B 
	{8, 720}, 		// C 
	{8, 738}, 		// D 
	{8, 756}, 		// E 
	{8, 774}, 		// F 
	{8, 792}, 		// G 
	{8, 810}, 		// H 
	{2, 828}, 		// I 
	{6, 846}, 		// J 
	{8, 864}, 		// K 
	{8, 882}, 		// L 
	{14, 900}, 		// M 
	{8, 936}, 		// N 
	{8, 954}, 		// O 
	{8, 972}, 		// P 
	{10, 990}, 		// Q 
	{8, 1026}, 		// R 
	{8, 1044}, 		// S 
	{10, 1062}, 		// T 
	{8, 1098}, 		// U 
	{8, 1116}, 		// V 
	{14, 1134}, 		// W 
	{8, 1170}, 		// X 
	{10, 1188}, 		// Y 
	{8, 1224}, 		// Z 
	{4, 1242}, 		// [ 
	{6, 1260}, 		// backslash
	{4, 1278}, 		// ] 
	{6, 1296}, 		// ^ 
	{8, 1314}, 		// _ 
	{2, 1332}, 		// ` 
	{8, 1350}, 		// a 
	{8, 1368}, 		// b 
	{8, 1386}, 		// c 
	{8, 1404}, 		// d 
	{8, 1422}, 		// e 
	{8, 1440}, 		// f 
	{8, 1458}, 		// g 
	{8, 1476}, 		// h 
	{2, 1494}, 		// i 
	{2, 1512}, 		// j 
	{8, 1530}, 		// k 
	{2, 1548}, 		// l 
	{14, 1566}, 		// m 
	{8, 1602}, 		// n 
	{8, 1620}, 		// o 
	{8, 1638}, 		// p 
	{8, 1656}, 		// q 
	{8, 1674}, 		// r 
	{8, 1692}, 		// s 
	{6, 1710}, 		// t 
	{8, 1728}, 		// u 
	{8, 1746}, 		// v 
	{14, 1764}, 		// w 
	{8, 1800}, 		// x 
	{8, 1818}, 		// y 
	{8, 1836}, 		// z 
	{0, 0}, 		// { 
	{2, 1854}, 		// | 
};

const FONT_CHAR_INFO_LOOKUP optionNormalFontBlockLookup[] = 
{
	{'!', '|', optionNormalFontDescriptors}
};

const FONT_INFO optionNormalFontInfo =
{
	optionNormalFontBlockLookup,
	optionNormalFontBitmaps,
	'!',
	'|',
	18,
	2,
	5,
	1
};

#endif /* OPTION_NORMAL_FONT_H */
