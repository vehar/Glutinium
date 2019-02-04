#ifndef SENSOR_CONFIG_WDR_H_                    
#define SENSOR_CONFIG_WDR_H_                    
                                                
static int sensor_rom_hdr[] = {                 
//[ar0331 wdr mode 1080P 30fps]                  
#if 1	//V2
	0xFFFE00C8,	//DELAY 200ms           
	0x301A0001,	//RESET_REGISTER, 0x0001
	0x301A10D8,	//RESET_REGISTER, 0x10D8
	0xFFFE00C8,	//DELAY 200ms           
	                                        
	0x30888000,     //SEQ_CTRL_PORT, 0x8000 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30866134,     //SEQ_DATA_PORT, 0x6134 
	0x30864A31,     //SEQ_DATA_PORT, 0x4A31 
	0x30864342,     //SEQ_DATA_PORT, 0x4342 
	0x30864560,     //SEQ_DATA_PORT, 0x4560 
	0x30862714,     //SEQ_DATA_PORT, 0x2714 
	0x30863DFF,     //SEQ_DATA_PORT, 0x3DFF 
	0x30863DFF,     //SEQ_DATA_PORT, 0x3DFF 
	0x30863DEA,     //SEQ_DATA_PORT, 0x3DEA 
	0x30862704,     //SEQ_DATA_PORT, 0x2704 
	0x30863D10,     //SEQ_DATA_PORT, 0x3D10 
	0x30862705,     //SEQ_DATA_PORT, 0x2705 
	0x30863D10,     //SEQ_DATA_PORT, 0x3D10 
	0x30862715,     //SEQ_DATA_PORT, 0x2715 
	0x30863527,     //SEQ_DATA_PORT, 0x3527 
	0x3086053D,     //SEQ_DATA_PORT, 0x053D 
	0x30861045,     //SEQ_DATA_PORT, 0x1045 
	0x30864027,     //SEQ_DATA_PORT, 0x4027 
	0x30860427,     //SEQ_DATA_PORT, 0x0427 
	0x3086143D,     //SEQ_DATA_PORT, 0x143D 
	0x3086FF3D,     //SEQ_DATA_PORT, 0xFF3D 
	0x3086FF3D,     //SEQ_DATA_PORT, 0xFF3D 
	0x3086EA62,     //SEQ_DATA_PORT, 0xEA62 
	0x30862728,     //SEQ_DATA_PORT, 0x2728 
	0x30863627,     //SEQ_DATA_PORT, 0x3627 
	0x3086083D,     //SEQ_DATA_PORT, 0x083D 
	0x30866444,     //SEQ_DATA_PORT, 0x6444 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30864B00,     //SEQ_DATA_PORT, 0x4B00 
	0x3086432D,     //SEQ_DATA_PORT, 0x432D 
	0x30866343,     //SEQ_DATA_PORT, 0x6343 
	0x30861664,     //SEQ_DATA_PORT, 0x1664 
	0x3086435F,     //SEQ_DATA_PORT, 0x435F 
	0x30864F50,     //SEQ_DATA_PORT, 0x4F50 
	0x30862604,     //SEQ_DATA_PORT, 0x2604 
	0x30862694,     //SEQ_DATA_PORT, 0x2684 	0x30862684,     //SEQ_DATA_PORT, 0x2684 
	0x308627FC,     //SEQ_DATA_PORT, 0x27FC 
	0x3086530D,     //SEQ_DATA_PORT, 0x530D 
	0x30865C0D,     //SEQ_DATA_PORT, 0x5C0D 
	0x30865754,     //SEQ_DATA_PORT, 0x5754 
	0x30861709,     //SEQ_DATA_PORT, 0x1709 
	0x30865556,     //SEQ_DATA_PORT, 0x5556 
	0x30864953,     //SEQ_DATA_PORT, 0x4953 
	0x30860753,     //SEQ_DATA_PORT, 0x0753 
	0x3086034D,     //SEQ_DATA_PORT, 0x034D 
	0x3086286C,     //SEQ_DATA_PORT, 0x286C 
	0x30864C09,     //SEQ_DATA_PORT, 0x4C09 
	0x3086282C,     //SEQ_DATA_PORT, 0x282C 
	0x30862828,     //SEQ_DATA_PORT, 0x2828 
	0x3086261C,     //SEQ_DATA_PORT, 0x260C 	0x3086260C,     //SEQ_DATA_PORT, 0x260C 
	0x30864E5C,     //SEQ_DATA_PORT, 0x4E5C 
	0x30860960,     //SEQ_DATA_PORT, 0x0960 
	0x30864500,     //SEQ_DATA_PORT, 0x4500 
	0x30864580,     //SEQ_DATA_PORT, 0x4580 
	0x308626BE,     //SEQ_DATA_PORT, 0x26AE 	0x308626AE,     //SEQ_DATA_PORT, 0x26AE 
	0x308627F8,     //SEQ_DATA_PORT, 0x27F8 
	0x30861702,     //SEQ_DATA_PORT, 0x1702 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x30865C0B,     //SEQ_DATA_PORT, 0x5C0B 
	0x30861712,     //SEQ_DATA_PORT, 0x1712 
	0x308626BA,     //SEQ_DATA_PORT, 0x26AA 	0x308626AA,     //SEQ_DATA_PORT, 0x26AA 
	0x30865C03,     //SEQ_DATA_PORT, 0x5C03 
	0x30861713,     //SEQ_DATA_PORT, 0x1723 	0x30861723,     //SEQ_DATA_PORT, 0x1723 
	0x308627F2, 	// SEQ_DATA_PORT
	0x3086171C, 	// SEQ_DATA_PORT

	0x30865F28,     //SEQ_DATA_PORT, 0x5F28 
	0x30860817,     //SEQ_DATA_PORT, 0x0827 	0x30860827,     //SEQ_DATA_PORT, 0x0827 
	0x30860360,     //SEQ_DATA_PORT, 0xF260 	0x3086F260,     //SEQ_DATA_PORT, 0xF260 
	0x3086173C,     //SEQ_DATA_PORT, 0x1716 	0x30861716,     //SEQ_DATA_PORT, 0x1716 
	0x308626B2,     //SEQ_DATA_PORT, 0x26A2 	0x308626A2,     //SEQ_DATA_PORT, 0x26A2 
	0x30861616, 	// SEQ_DATA_PORT

	0x30865F4D,     //SEQ_DATA_PORT, 0x5F4D 
	0x30861926,     //SEQ_DATA_PORT, 0x1926 
	0x30869316,     //SEQ_DATA_PORT, 0x8316 	0x30868316,     //SEQ_DATA_PORT, 0x8316 
	0x30861627,     //SEQ_DATA_PORT, 0x1627 
	0x3086FA45,     //SEQ_DATA_PORT, 0xFA45 
	0x3086A017,     //SEQ_DATA_PORT, 0xA017 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086FB17,     //SEQ_DATA_PORT, 0xFB17 
	0x30861F45,     //SEQ_DATA_PORT, 0x1F45 
	0x3086801F,     //SEQ_DATA_PORT, 0x801F 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x3086171E,     //SEQ_DATA_PORT, 0x171E 
	0x30865D17,     //SEQ_DATA_PORT, 0x5D17 
	0x30860C26,     //SEQ_DATA_PORT, 0x0C26 
	0x30869248,     //SEQ_DATA_PORT, 0x8248 	0x30868248,     //SEQ_DATA_PORT, 0x8248 
	0x30864D4E,     //SEQ_DATA_PORT, 0x4D4E 
	0x3086269A,     //SEQ_DATA_PORT, 0x268A 	0x3086268A,     //SEQ_DATA_PORT, 0x268A 
	0x30862808,     //SEQ_DATA_PORT, 0x2808 
	0x30864C0B,     //SEQ_DATA_PORT, 0x4C0B 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30860327,     //SEQ_DATA_PORT, 0x2B27 	0x30862B27,     //SEQ_DATA_PORT, 0x2B27 
	0x3086F217,     //SEQ_DATA_PORT, 0xF217 
	0x30862626,     //SEQ_DATA_PORT, 0x1626 	0x30861626,     //SEQ_DATA_PORT, 0x1626 
	0x30869216, 	// SEQ_DATA_PORT

	0x3086165F,     //SEQ_DATA_PORT, 0x825F 	0x3086825F,     //SEQ_DATA_PORT, 0x825F 
	0x30864D19,     //SEQ_DATA_PORT, 0x4D19 
	0x30862693, 	// SEQ_DATA_PORT

	0x30861616,     //SEQ_DATA_PORT, 0x1616 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x30862643,     //SEQ_DATA_PORT, 0x2642 	0x30862642,     //SEQ_DATA_PORT, 0x2642 
	0x30865C01,     //SEQ_DATA_PORT, 0x5C01 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30862798,     //SEQ_DATA_PORT, 0x2798 
	0x30861720,     //SEQ_DATA_PORT, 0x1720 
	0x30864A65,     //SEQ_DATA_PORT, 0x4A65 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x30866643,     //SEQ_DATA_PORT, 0x6643 
	0x30865A43,     //SEQ_DATA_PORT, 0x5A43 
	0x3086165B,     //SEQ_DATA_PORT, 0x165B 
	0x30864327,     //SEQ_DATA_PORT, 0x4327 
	0x30869C45,     //SEQ_DATA_PORT, 0x9C45 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30860627,     //SEQ_DATA_PORT, 0x0627 
	0x30869D17,     //SEQ_DATA_PORT, 0x9D17 
	0x30861C45,     //SEQ_DATA_PORT, 0x1C45 
	0x30864023,     //SEQ_DATA_PORT, 0x4023 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x30862798,     //SEQ_DATA_PORT, 0x2798 
	0x30865D26,     //SEQ_DATA_PORT, 0x5D26 
	0x30864417,     //SEQ_DATA_PORT, 0x4417 
	0x30860E28,     //SEQ_DATA_PORT, 0x0E28 
	0x30860053,     //SEQ_DATA_PORT, 0x0053 
	0x3086014B,     //SEQ_DATA_PORT, 0x014B 
	0x30865251,     //SEQ_DATA_PORT, 0x5251 
	0x30861244,     //SEQ_DATA_PORT, 0x1244 
	0x30864B01,     //SEQ_DATA_PORT, 0x4B01 
	0x3086432D,     //SEQ_DATA_PORT, 0x432D 
	0x30864643,     //SEQ_DATA_PORT, 0x4643 
	0x30861647,     //SEQ_DATA_PORT, 0x1647 
	0x3086434F,     //SEQ_DATA_PORT, 0x434F 
	0x30865026,     //SEQ_DATA_PORT, 0x5026 
	0x30860426,     //SEQ_DATA_PORT, 0x0426 
	0x30868427,     //SEQ_DATA_PORT, 0x8427 
	0x3086FC53,     //SEQ_DATA_PORT, 0xFC53 
	0x30860D5C,     //SEQ_DATA_PORT, 0x0D5C 
	0x30860D57,     //SEQ_DATA_PORT, 0x0D57 
	0x30865417,     //SEQ_DATA_PORT, 0x5417 
	0x30860955,     //SEQ_DATA_PORT, 0x0955 
	0x30865649,     //SEQ_DATA_PORT, 0x5649 
	0x30865307,     //SEQ_DATA_PORT, 0x5307 
	0x30865303,     //SEQ_DATA_PORT, 0x5303 
	0x30864D28,     //SEQ_DATA_PORT, 0x4D28 
	0x30866C4C,     //SEQ_DATA_PORT, 0x6C4C 
	0x30860928,     //SEQ_DATA_PORT, 0x0928 
	0x30862C28,     //SEQ_DATA_PORT, 0x2C28 
	0x30862826,     //SEQ_DATA_PORT, 0x2826 
	0x30860C4E,     //SEQ_DATA_PORT, 0x0C4E 
	0x30865C09,     //SEQ_DATA_PORT, 0x5C09 
	0x30866045,     //SEQ_DATA_PORT, 0x6045 
	0x30860045,     //SEQ_DATA_PORT, 0x0045 
	0x30868026,     //SEQ_DATA_PORT, 0x8026 
	0x3086AE27,     //SEQ_DATA_PORT, 0xAE27 
	0x3086F817,     //SEQ_DATA_PORT, 0xF817 
	0x30860227,     //SEQ_DATA_PORT, 0x0227 
	0x3086FA5C,     //SEQ_DATA_PORT, 0xFA5C 
	0x30860B17,     //SEQ_DATA_PORT, 0x0B17 
	0x30861226,     //SEQ_DATA_PORT, 0x1226 
	0x3086AA5C,     //SEQ_DATA_PORT, 0xAA5C 
	0x30860317,     //SEQ_DATA_PORT, 0x0317 
	0x30860B27, 	// SEQ_DATA_PORT
	0x3086F217, 	// SEQ_DATA_PORT

	0x3086265F,     //SEQ_DATA_PORT, 0x235F 	0x3086235F,     //SEQ_DATA_PORT, 0x235F 
	0x30862808,     //SEQ_DATA_PORT, 0x2808 
	0x30861703,     //SEQ_DATA_PORT, 0x27F2 	0x308627F2,     //SEQ_DATA_PORT, 0x27F2 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30860326, 	// SEQ_DATA_PORT

	0x3086A216,     //SEQ_DATA_PORT, 0x1626 	0x30861626,     //SEQ_DATA_PORT, 0x1626 
	0x3086165F,     //SEQ_DATA_PORT, 0xA25F 	0x3086A25F,     //SEQ_DATA_PORT, 0xA25F 
	0x30864D1A,     //SEQ_DATA_PORT, 0x4D1A 
	0x30862683,     //SEQ_DATA_PORT, 0x2683 
	0x30861616,     //SEQ_DATA_PORT, 0x1616 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x308645A0,     //SEQ_DATA_PORT, 0x45A0 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x308627FB,     //SEQ_DATA_PORT, 0x27FB 
	0x3086171F,     //SEQ_DATA_PORT, 0x171F 
	0x30864580,     //SEQ_DATA_PORT, 0x4580 
	0x30862017,     //SEQ_DATA_PORT, 0x2017 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086FA17,     //SEQ_DATA_PORT, 0xFA17 
	0x30861E5D,     //SEQ_DATA_PORT, 0x1E5D 
	0x3086170C,     //SEQ_DATA_PORT, 0x170C 
	0x30862682,     //SEQ_DATA_PORT, 0x2682 
	0x3086484D,     //SEQ_DATA_PORT, 0x484D 
	0x30864E26,     //SEQ_DATA_PORT, 0x4E26 
	0x30868A28,     //SEQ_DATA_PORT, 0x8A28 
	0x3086084C,     //SEQ_DATA_PORT, 0x084C 
	0x30860B60,     //SEQ_DATA_PORT, 0x0B60 
	0x30861707,     //SEQ_DATA_PORT, 0x172D 	0x3086172D,     //SEQ_DATA_PORT, 0x172D 
	0x308627F2,     //SEQ_DATA_PORT, 0x27F2 
	0x30861738,     //SEQ_DATA_PORT, 0x1716	0x30861716,     //SEQ_DATA_PORT, 0x1716 
	0x30862682,     //SEQ_DATA_PORT, 0x2682 
	0x30861616, 	// SEQ_DATA_PORT

	0x30865F4D,     //SEQ_DATA_PORT, 0x5F4D 
	0x30861A26,     //SEQ_DATA_PORT, 0x1A16	0x30861A16,     //SEQ_DATA_PORT, 0x1A16 
	0x30868316,	// SEQ_DATA_PORT

	0x30861627,     //SEQ_DATA_PORT, 0x1627 
	0x3086FA26,     //SEQ_DATA_PORT, 0xFA26 
	0x3086435C,     //SEQ_DATA_PORT, 0x425C 	0x3086425C,     //SEQ_DATA_PORT, 0x425C 
	0x30860145,     //SEQ_DATA_PORT, 0x0145 
	0x30864027,     //SEQ_DATA_PORT, 0x4027 
	0x30869817,     //SEQ_DATA_PORT, 0x9817 
	0x30861F4A,     //SEQ_DATA_PORT, 0x1F4A 
	0x30861244,     //SEQ_DATA_PORT, 0x1244 
	0x30860343,     //SEQ_DATA_PORT, 0x0343 
	0x30861604,     //SEQ_DATA_PORT, 0x1604 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x30865843,     //SEQ_DATA_PORT, 0x5843 
	0x30861659,     //SEQ_DATA_PORT, 0x1659 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x3086279C,     //SEQ_DATA_PORT, 0x279C 
	0x30864560,     //SEQ_DATA_PORT, 0x4560 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x3086279D,     //SEQ_DATA_PORT, 0x279D 
	0x3086171D,     //SEQ_DATA_PORT, 0x171D 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30862217,     //SEQ_DATA_PORT, 0x2217 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086985D,     //SEQ_DATA_PORT, 0x985D 
	0x30862645,     //SEQ_DATA_PORT, 0x2645 
	0x3086170E,     //SEQ_DATA_PORT, 0x170E 
	0x30862800,     //SEQ_DATA_PORT, 0x2800 
	0x30865301,     //SEQ_DATA_PORT, 0x5301 
	0x30864B52,     //SEQ_DATA_PORT, 0x4B52 
	0x30865112,     //SEQ_DATA_PORT, 0x5112 
	0x30864460,     //SEQ_DATA_PORT, 0x4460 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	                                        
	0x301A10D8,     //RESET_REGISTER, 0x10D8 
	0x30B00000,     //DIGITAL_TEST, 0x0000 		
	0x30BA07EC, 	// DIGITAL_CTRL

	0x31AC100C,     //DATA_FORMAT_BITS, 0x100C 
	0x302A0008,     //VT_PIX_CLK_DIV, 0x0008 	           
	0x302C0001,     //VT_SYS_CLK_DIV, 0x0001 	           
	0x302E0002,     //PRE_PLL_CLK_DIV, 0x0002 	   
	0x3030002C,     //PLL_MULTIPLIER, 0x002C 	           
	0x3036000C,     //OP_PIX_CLK_DIV, 0x000C 	           
	0x30380001,     //OP_SYS_CLK_DIV, 0x0001 
	
	0x300200E4,     //Y_ADDR_START, 0x00E4 		   
	0x30040042,     //X_ADDR_START, 0x0042 		   
	0x30060523,     //Y_ADDR_END, 0x0523 		   
	0x300807C9,     //X_ADDR_END, 0x07C9 		   
	0x300A0465,     //FRAME_LENGTH_LINES, 0x0465    
	0x300C044C,     //LINE_LENGTH_PCK, 0x044C	//25fps:0x0528;30fps:0x044c
	0x30120416,     //COARSE_INTEGRATION_TIME, 0x0416
	0x30140000,     //                               
	0x30A20001,     //X_ODD_INC, 0x0001              
	0x30A60001,     //Y_ODD_INC, 0x0001              
	0x30400000,     //READ_MODE, 0x0000 	         
	0x31AE0301,     //SERIAL_FORMAT, 0x0301          

	//WDR:4X:0x0000; 8X:0x0004; 16X:0x0008; 32X:0x000c
	0x30820008,     //OPERATION_MODE_CTRL, 0x0008	 
	0x305E0080,    //FIELD_WR= GLOBAL_GAIN, 0x0020
	0xFFFE003C,     //delay   60 
	0x305E0080,     //GLOBAL_GAIN, 0x0080 		
	0x320200A0,     //ADACD_NOISE_MODEL1, 0x00A0
	0x32061810,     //ADACD_NOISE_FLOOR1, 0x1810
	0x32082820,     //ADACD_NOISE_FLOOR2, 0x2820
	0x32000002,     //ADACD_CONTROL, 0x0002 	
	                                        
	//2D motion compensation OFF:0x318C0000, ON:0x318CC001
	0x318CC001,     //HDR_MC_CTRL2, 0xC001	
	0x31982050,     //HDR_MC_CTRL8, 0x061E
	
	0x24440000,     //ALTM_CONTROL_KEY_K01_LO, 0x0000 
	0x24460004,     //ALTM_CONTROL_KEY_K01_HI, 0x0004 
	                                                  
	//ALTM Enabled                                    
	//0x31D00000,     //COMPANDING, 0x0000            
	//0x24000002,     //ALTM_CONTROL, 0x0002          
	                                                  
	//ALTM Disabled                                   
	0x24000003,     //ALTM_CONTROL, 0x0003            
	0x31D00001,     //COMPANDING, 0x0001              
	                                                  
	0x30FE0000,     //NOISE_PEDESTAL, 0x0000 		     
	0x320A0000,     //ADACD_PEDESTAL, 0x0000 		     
	0x24500000,     //ALTM_OUT_PEDESTAL, 0x0000 		
	0x243C0000,     //ALTM_CONTROL_DARK_FLOOR, 0x0000 
	0x24380010,     //ALTM_CONTROL_MIN_FACTOR, 0x0010 
	0x301E00A8,     //DATA_PEDESTAL, 0x0010 	
	0x30641802,     //SMIA_TEST, 0x1982 		
	0x301A10DA,     //RESET_REGISTER, 0x10DA 	
	0x24400002,     //ALTM_CONTROL_DAMPER, 0x0002
	0x30F44000,     //ADC_COMMAND3_HS, 0x4000 	
	0x31808029,     //DELTA_DK_CONTROL, 0x8029 	
//	0x3198061E,     //HDR_MC_CTRL8, 0x061E 		
	0x3ED23F46,     //DAC_LD_6_7, 0x3F46 		
	0x3ED48F6C,     //DAC_LD_8_9, 0x8F6C 		
	0x3ED66666,     //DAC_LD_10_11, 0x6666 		
	0x3EDA8899,     //DAC_LD_14_15, 0x8899 		
	0x3EE600F0,     //DAC_LD_26_27, 0x00F0 		
	0x301A10DC,     //RESET_REGISTER, 0x10DC 	
                                                     
        0xFFFFFFFF  // END                           

#else	//V1
	0xFFFE00C8,	//DELAY 200ms           
	0x301A0001,	//RESET_REGISTER, 0x0001
	0x301A10D8,	//RESET_REGISTER, 0x10D8
	0xFFFE00C8,	//DELAY 200ms           
	                                        
	0x30888000,     //SEQ_CTRL_PORT, 0x8000 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30866134,     //SEQ_DATA_PORT, 0x6134 
	0x30864A31,     //SEQ_DATA_PORT, 0x4A31 
	0x30864342,     //SEQ_DATA_PORT, 0x4342 
	0x30864560,     //SEQ_DATA_PORT, 0x4560 
	0x30862714,     //SEQ_DATA_PORT, 0x2714 
	0x30863DFF,     //SEQ_DATA_PORT, 0x3DFF 
	0x30863DFF,     //SEQ_DATA_PORT, 0x3DFF 
	0x30863DEA,     //SEQ_DATA_PORT, 0x3DEA 
	0x30862704,     //SEQ_DATA_PORT, 0x2704 
	0x30863D10,     //SEQ_DATA_PORT, 0x3D10 
	0x30862705,     //SEQ_DATA_PORT, 0x2705 
	0x30863D10,     //SEQ_DATA_PORT, 0x3D10 
	0x30862715,     //SEQ_DATA_PORT, 0x2715 
	0x30863527,     //SEQ_DATA_PORT, 0x3527 
	0x3086053D,     //SEQ_DATA_PORT, 0x053D 
	0x30861045,     //SEQ_DATA_PORT, 0x1045 
	0x30864027,     //SEQ_DATA_PORT, 0x4027 
	0x30860427,     //SEQ_DATA_PORT, 0x0427 
	0x3086143D,     //SEQ_DATA_PORT, 0x143D 
	0x3086FF3D,     //SEQ_DATA_PORT, 0xFF3D 
	0x3086FF3D,     //SEQ_DATA_PORT, 0xFF3D 
	0x3086EA62,     //SEQ_DATA_PORT, 0xEA62 
	0x30862728,     //SEQ_DATA_PORT, 0x2728 
	0x30863627,     //SEQ_DATA_PORT, 0x3627 
	0x3086083D,     //SEQ_DATA_PORT, 0x083D 
	0x30866444,     //SEQ_DATA_PORT, 0x6444 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30864B00,     //SEQ_DATA_PORT, 0x4B00 
	0x3086432D,     //SEQ_DATA_PORT, 0x432D 
	0x30866343,     //SEQ_DATA_PORT, 0x6343 
	0x30861664,     //SEQ_DATA_PORT, 0x1664 
	0x3086435F,     //SEQ_DATA_PORT, 0x435F 
	0x30864F50,     //SEQ_DATA_PORT, 0x4F50 
	0x30862604,     //SEQ_DATA_PORT, 0x2604 
	0x30862684,     //SEQ_DATA_PORT, 0x2684 
	0x308627FC,     //SEQ_DATA_PORT, 0x27FC 
	0x3086530D,     //SEQ_DATA_PORT, 0x530D 
	0x30865C0D,     //SEQ_DATA_PORT, 0x5C0D 
	0x30865754,     //SEQ_DATA_PORT, 0x5754 
	0x30861709,     //SEQ_DATA_PORT, 0x1709 
	0x30865556,     //SEQ_DATA_PORT, 0x5556 
	0x30864953,     //SEQ_DATA_PORT, 0x4953 
	0x30860753,     //SEQ_DATA_PORT, 0x0753 
	0x3086034D,     //SEQ_DATA_PORT, 0x034D 
	0x3086286C,     //SEQ_DATA_PORT, 0x286C 
	0x30864C09,     //SEQ_DATA_PORT, 0x4C09 
	0x3086282C,     //SEQ_DATA_PORT, 0x282C 
	0x30862828,     //SEQ_DATA_PORT, 0x2828 
	0x3086260C,     //SEQ_DATA_PORT, 0x260C 
	0x30864E5C,     //SEQ_DATA_PORT, 0x4E5C 
	0x30860960,     //SEQ_DATA_PORT, 0x0960 
	0x30864500,     //SEQ_DATA_PORT, 0x4500 
	0x30864580,     //SEQ_DATA_PORT, 0x4580 
	0x308626AE,     //SEQ_DATA_PORT, 0x26AE 
	0x308627F8,     //SEQ_DATA_PORT, 0x27F8 
	0x30861702,     //SEQ_DATA_PORT, 0x1702 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x30865C0B,     //SEQ_DATA_PORT, 0x5C0B 
	0x30861712,     //SEQ_DATA_PORT, 0x1712 
	0x308626AA,     //SEQ_DATA_PORT, 0x26AA 
	0x30865C03,     //SEQ_DATA_PORT, 0x5C03 
	0x30861723,     //SEQ_DATA_PORT, 0x1723 
	0x30865F28,     //SEQ_DATA_PORT, 0x5F28 
	0x30860827,     //SEQ_DATA_PORT, 0x0827 
	0x3086F260,     //SEQ_DATA_PORT, 0xF260 
	0x30861716,     //SEQ_DATA_PORT, 0x1716 
	0x308626A2,     //SEQ_DATA_PORT, 0x26A2 
	0x30865F4D,     //SEQ_DATA_PORT, 0x5F4D 
	0x30861926,     //SEQ_DATA_PORT, 0x1926 
	0x30868316,     //SEQ_DATA_PORT, 0x8316 
	0x30861627,     //SEQ_DATA_PORT, 0x1627 
	0x3086FA45,     //SEQ_DATA_PORT, 0xFA45 
	0x3086A017,     //SEQ_DATA_PORT, 0xA017 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086FB17,     //SEQ_DATA_PORT, 0xFB17 
	0x30861F45,     //SEQ_DATA_PORT, 0x1F45 
	0x3086801F,     //SEQ_DATA_PORT, 0x801F 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x3086171E,     //SEQ_DATA_PORT, 0x171E 
	0x30865D17,     //SEQ_DATA_PORT, 0x5D17 
	0x30860C26,     //SEQ_DATA_PORT, 0x0C26 
	0x30868248,     //SEQ_DATA_PORT, 0x8248 
	0x30864D4E,     //SEQ_DATA_PORT, 0x4D4E 
	0x3086268A,     //SEQ_DATA_PORT, 0x268A 
	0x30862808,     //SEQ_DATA_PORT, 0x2808 
	0x30864C0B,     //SEQ_DATA_PORT, 0x4C0B 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30862B27,     //SEQ_DATA_PORT, 0x2B27 
	0x3086F217,     //SEQ_DATA_PORT, 0xF217 
	0x30861626,     //SEQ_DATA_PORT, 0x1626 
	0x3086825F,     //SEQ_DATA_PORT, 0x825F 
	0x30864D19,     //SEQ_DATA_PORT, 0x4D19 
	0x30861616,     //SEQ_DATA_PORT, 0x1616 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x30862642,     //SEQ_DATA_PORT, 0x2642 
	0x30865C01,     //SEQ_DATA_PORT, 0x5C01 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30862798,     //SEQ_DATA_PORT, 0x2798 
	0x30861720,     //SEQ_DATA_PORT, 0x1720 
	0x30864A65,     //SEQ_DATA_PORT, 0x4A65 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x30866643,     //SEQ_DATA_PORT, 0x6643 
	0x30865A43,     //SEQ_DATA_PORT, 0x5A43 
	0x3086165B,     //SEQ_DATA_PORT, 0x165B 
	0x30864327,     //SEQ_DATA_PORT, 0x4327 
	0x30869C45,     //SEQ_DATA_PORT, 0x9C45 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30860627,     //SEQ_DATA_PORT, 0x0627 
	0x30869D17,     //SEQ_DATA_PORT, 0x9D17 
	0x30861C45,     //SEQ_DATA_PORT, 0x1C45 
	0x30864023,     //SEQ_DATA_PORT, 0x4023 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x30862798,     //SEQ_DATA_PORT, 0x2798 
	0x30865D26,     //SEQ_DATA_PORT, 0x5D26 
	0x30864417,     //SEQ_DATA_PORT, 0x4417 
	0x30860E28,     //SEQ_DATA_PORT, 0x0E28 
	0x30860053,     //SEQ_DATA_PORT, 0x0053 
	0x3086014B,     //SEQ_DATA_PORT, 0x014B 
	0x30865251,     //SEQ_DATA_PORT, 0x5251 
	0x30861244,     //SEQ_DATA_PORT, 0x1244 
	0x30864B01,     //SEQ_DATA_PORT, 0x4B01 
	0x3086432D,     //SEQ_DATA_PORT, 0x432D 
	0x30864643,     //SEQ_DATA_PORT, 0x4643 
	0x30861647,     //SEQ_DATA_PORT, 0x1647 
	0x3086434F,     //SEQ_DATA_PORT, 0x434F 
	0x30865026,     //SEQ_DATA_PORT, 0x5026 
	0x30860426,     //SEQ_DATA_PORT, 0x0426 
	0x30868427,     //SEQ_DATA_PORT, 0x8427 
	0x3086FC53,     //SEQ_DATA_PORT, 0xFC53 
	0x30860D5C,     //SEQ_DATA_PORT, 0x0D5C 
	0x30860D57,     //SEQ_DATA_PORT, 0x0D57 
	0x30865417,     //SEQ_DATA_PORT, 0x5417 
	0x30860955,     //SEQ_DATA_PORT, 0x0955 
	0x30865649,     //SEQ_DATA_PORT, 0x5649 
	0x30865307,     //SEQ_DATA_PORT, 0x5307 
	0x30865303,     //SEQ_DATA_PORT, 0x5303 
	0x30864D28,     //SEQ_DATA_PORT, 0x4D28 
	0x30866C4C,     //SEQ_DATA_PORT, 0x6C4C 
	0x30860928,     //SEQ_DATA_PORT, 0x0928 
	0x30862C28,     //SEQ_DATA_PORT, 0x2C28 
	0x30862826,     //SEQ_DATA_PORT, 0x2826 
	0x30860C4E,     //SEQ_DATA_PORT, 0x0C4E 
	0x30865C09,     //SEQ_DATA_PORT, 0x5C09 
	0x30866045,     //SEQ_DATA_PORT, 0x6045 
	0x30860045,     //SEQ_DATA_PORT, 0x0045 
	0x30868026,     //SEQ_DATA_PORT, 0x8026 
	0x3086AE27,     //SEQ_DATA_PORT, 0xAE27 
	0x3086F817,     //SEQ_DATA_PORT, 0xF817 
	0x30860227,     //SEQ_DATA_PORT, 0x0227 
	0x3086FA5C,     //SEQ_DATA_PORT, 0xFA5C 
	0x30860B17,     //SEQ_DATA_PORT, 0x0B17 
	0x30861226,     //SEQ_DATA_PORT, 0x1226 
	0x3086AA5C,     //SEQ_DATA_PORT, 0xAA5C 
	0x30860317,     //SEQ_DATA_PORT, 0x0317 
	0x3086235F,     //SEQ_DATA_PORT, 0x235F 
	0x30862808,     //SEQ_DATA_PORT, 0x2808 
	0x308627F2,     //SEQ_DATA_PORT, 0x27F2 
	0x30866017,     //SEQ_DATA_PORT, 0x6017 
	0x30861626,     //SEQ_DATA_PORT, 0x1626 
	0x3086A25F,     //SEQ_DATA_PORT, 0xA25F 
	0x30864D1A,     //SEQ_DATA_PORT, 0x4D1A 
	0x30862683,     //SEQ_DATA_PORT, 0x2683 
	0x30861616,     //SEQ_DATA_PORT, 0x1616 
	0x308627FA,     //SEQ_DATA_PORT, 0x27FA 
	0x308645A0,     //SEQ_DATA_PORT, 0x45A0 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x308627FB,     //SEQ_DATA_PORT, 0x27FB 
	0x3086171F,     //SEQ_DATA_PORT, 0x171F 
	0x30864580,     //SEQ_DATA_PORT, 0x4580 
	0x30862017,     //SEQ_DATA_PORT, 0x2017 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086FA17,     //SEQ_DATA_PORT, 0xFA17 
	0x30861E5D,     //SEQ_DATA_PORT, 0x1E5D 
	0x3086170C,     //SEQ_DATA_PORT, 0x170C 
	0x30862682,     //SEQ_DATA_PORT, 0x2682 
	0x3086484D,     //SEQ_DATA_PORT, 0x484D 
	0x30864E26,     //SEQ_DATA_PORT, 0x4E26 
	0x30868A28,     //SEQ_DATA_PORT, 0x8A28 
	0x3086084C,     //SEQ_DATA_PORT, 0x084C 
	0x30860B60,     //SEQ_DATA_PORT, 0x0B60 
	0x3086172D,     //SEQ_DATA_PORT, 0x172D 
	0x308627F2,     //SEQ_DATA_PORT, 0x27F2 
	0x30861716,     //SEQ_DATA_PORT, 0x1716 
	0x30862682,     //SEQ_DATA_PORT, 0x2682 
	0x30865F4D,     //SEQ_DATA_PORT, 0x5F4D 
	0x30861A16,     //SEQ_DATA_PORT, 0x1A16 
	0x30861627,     //SEQ_DATA_PORT, 0x1627 
	0x3086FA26,     //SEQ_DATA_PORT, 0xFA26 
	0x3086425C,     //SEQ_DATA_PORT, 0x425C 
	0x30860145,     //SEQ_DATA_PORT, 0x0145 
	0x30864027,     //SEQ_DATA_PORT, 0x4027 
	0x30869817,     //SEQ_DATA_PORT, 0x9817 
	0x30861F4A,     //SEQ_DATA_PORT, 0x1F4A 
	0x30861244,     //SEQ_DATA_PORT, 0x1244 
	0x30860343,     //SEQ_DATA_PORT, 0x0343 
	0x30861604,     //SEQ_DATA_PORT, 0x1604 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x30865843,     //SEQ_DATA_PORT, 0x5843 
	0x30861659,     //SEQ_DATA_PORT, 0x1659 
	0x30864316,     //SEQ_DATA_PORT, 0x4316 
	0x3086279C,     //SEQ_DATA_PORT, 0x279C 
	0x30864560,     //SEQ_DATA_PORT, 0x4560 
	0x30861705,     //SEQ_DATA_PORT, 0x1705 
	0x3086279D,     //SEQ_DATA_PORT, 0x279D 
	0x3086171D,     //SEQ_DATA_PORT, 0x171D 
	0x30864540,     //SEQ_DATA_PORT, 0x4540 
	0x30862217,     //SEQ_DATA_PORT, 0x2217 
	0x30860527,     //SEQ_DATA_PORT, 0x0527 
	0x3086985D,     //SEQ_DATA_PORT, 0x985D 
	0x30862645,     //SEQ_DATA_PORT, 0x2645 
	0x3086170E,     //SEQ_DATA_PORT, 0x170E 
	0x30862800,     //SEQ_DATA_PORT, 0x2800 
	0x30865301,     //SEQ_DATA_PORT, 0x5301 
	0x30864B52,     //SEQ_DATA_PORT, 0x4B52 
	0x30865112,     //SEQ_DATA_PORT, 0x5112 
	0x30864460,     //SEQ_DATA_PORT, 0x4460 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	0x30862C2C,     //SEQ_DATA_PORT, 0x2C2C 
	                                        
	0x301A10D8,     //RESET_REGISTER, 0x10D8 
	0x30B00000,     //DIGITAL_TEST, 0x0000 		
	0x31AC100C,     //DATA_FORMAT_BITS, 0x100C 
	0x302A0008,     //VT_PIX_CLK_DIV, 0x0008 	           
	0x302C0001,     //VT_SYS_CLK_DIV, 0x0001 	           
	0x302E0002,     //PRE_PLL_CLK_DIV, 0x0002 	   
	0x3030002C,     //PLL_MULTIPLIER, 0x002C 	           
	0x3036000C,     //OP_PIX_CLK_DIV, 0x000C 	           
	0x30380001,     //OP_SYS_CLK_DIV, 0x0001 	           
	0x300200E4,     //Y_ADDR_START, 0x00E4 		   
	0x30040042,     //X_ADDR_START, 0x0042 		   
	0x30060523,     //Y_ADDR_END, 0x0523 		   
	0x300807C9,     //X_ADDR_END, 0x07C9 		   
	0x300A0465,     //FRAME_LENGTH_LINES, 0x0465    
	0x300C044C,     //LINE_LENGTH_PCK, 0x044C	//25fps:0x0528;30fps:0x044c
	0x30120416,     //COARSE_INTEGRATION_TIME, 0x0416
	0x30140000,     //                               
	0x30A20001,     //X_ODD_INC, 0x0001              
	0x30A60001,     //Y_ODD_INC, 0x0001              
	0x30400000,     //READ_MODE, 0x0000 	         
	0x31AE0301,     //SERIAL_FORMAT, 0x0301          

	//WDR:4X:0x0000; 8X:0x0004; 16X:0x0008; 32X:0x000c
	0x30820008,     //OPERATION_MODE_CTRL, 0x0008	 
	0x31D00001,     //COMPANDING, 0x0001                          
	0xFFFE003C,     //delay                          
	                                       
	0x305E0080,     //GLOBAL_GAIN, 0x0080 		
	0x320200A0,     //ADACD_NOISE_MODEL1, 0x00A0
	0x32061810,     //ADACD_NOISE_FLOOR1, 0x1810
	0x32082820,     //ADACD_NOISE_FLOOR2, 0x2820
	0x32000002,     //ADACD_CONTROL, 0x0002 	
	                                        
	//2D motion compensation OFF:0x318C0000, ON:0x318CC001
	0x318CC001,     //HDR_MC_CTRL2, 0xC001	
	0x31982050,     //HDR_MC_CTRL8, 0x061E
//	0x318A0E10,
	
	0x24440000,     //ALTM_CONTROL_KEY_K01_LO, 0x0000 
	0x24460004,     //ALTM_CONTROL_KEY_K01_HI, 0x0004 
	                                                  
	//ALTM Enabled                                    
	//0x31D00000,     //COMPANDING, 0x0000            
	//0x24000002,     //ALTM_CONTROL, 0x0002          
	                                                  
	//ALTM Disabled                                   
	0x24000003,     //ALTM_CONTROL, 0x0003            
	0x31D00001,     //COMPANDING, 0x0001              
	                                                  
	0x30FE0000,     //NOISE_PEDESTAL, 0x0000 		     
	0x320A0000,     //ADACD_PEDESTAL, 0x0000 		     
	0x24500000,     //ALTM_OUT_PEDESTAL, 0x0000 		
	0x243C0000,     //ALTM_CONTROL_DARK_FLOOR, 0x0000 
	0x24380010,     //ALTM_CONTROL_MIN_FACTOR, 0x0010 
	0x301E00A8,     //DATA_PEDESTAL, 0x0010 	
	0x30641802,     //SMIA_TEST, 0x1982 		
	0x301A10DA,     //RESET_REGISTER, 0x10DA 	
	0x24400002,     //ALTM_CONTROL_DAMPER, 0x0002
	0x30F44000,     //ADC_COMMAND3_HS, 0x4000 	
	0x31808029,     //DELTA_DK_CONTROL, 0x8029 	
//	0x3198061E,     //HDR_MC_CTRL8, 0x061E 		
	0x3ED23F46,     //DAC_LD_6_7, 0x3F46 		
	0x3ED48F6C,     //DAC_LD_8_9, 0x8F6C 		
	0x3ED66666,     //DAC_LD_10_11, 0x6666 		
	0x3EDA8899,     //DAC_LD_14_15, 0x8899 		
	0x3EE600F0,     //DAC_LD_26_27, 0x00F0 		
	0x301A10DC,     //RESET_REGISTER, 0x10DC 	
                                                     
        0xFFFFFFFF  // END                           
#endif
};                                                   
                                                     
#endif /*SENSOR_CONFIG_WDR_H_*/ 