#include <stdio.h>
#include <stdint.h>
#include "edc_crc.h"
#include "rtthread.h"



uint8_t s_buffer[33];


int crc_main(int argc, char* argv[])
{
	const char* p_datap="123456789";
	EDC_ERR err;

  CPU_INT16U   crc = CRC_ChkSumCalc_16Bit((CRC_MODEL_16*)&CRC_ModelCRC16_8005,(void*)p_datap,strlen(p_datap),&err);
	if(EDC_CRC_ERR_NONE != err)
  {
		rt_kprintf("err\r\n");
	}
	else
  {
		rt_kprintf("crc = %#x\r\n",crc);
	}
	
	
	
	return 0;
}