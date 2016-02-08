/*************************************************************************
*   ��Ȩ����(C) 1987-2004, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  BSP_VIC.h
*
*   ��    �� :  zhanghailun
*
*   ��    �� :  �ж�ģ���û��ӿ��ļ�
*
*   �޸ļ�¼ :  2009��3��5��  v1.00  zhanghailun  ����
*************************************************************************/

#ifndef _BSP_VIC_H_
#define _BSP_VIC_H_

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
* �� �� ��  : BSP_INT_Enable
*
* ��������  : ʹ��ĳ���ж�
*
* �������  : BSP_S32 s32Lvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��40  
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
*****************************************************************************/


/*****************************************************************************
 * �� �� ��  : BSP_INT_Disable
 *
 * ��������  : ȥʹ��ĳ���ж�
 *
 * �������  : BSP_S32 s32Lvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��40  
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/


/*****************************************************************************
 * �� �� ��  : BSP_INT_Connect
 *
 * ��������  : ע��ĳ���ж�
 *
 * �������  : VOIDFUNCPTR * vector �ж������ţ�ȡֵ��Χ0��40
 *  		 VOIDFUNCPTR routine  �жϷ������
 *           BSP_S32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/

/*****************************************************************************
 * �� �� ��  : BSP_INT_DisConnect
 *
 * ��������  : ȡ��ע��ĳ���ж�
 *
 * �������  : VOIDFUNCPTR * vector �ж������ţ�ȡֵ��Χ0��40
 *  		 VOIDFUNCPTR routine  �жϷ������
 *           BSP_S32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/

/*****************************************************************************
 * �� �� ��  : BSP_INT_Lock
 *
 * ��������  : ���������ж�
 *
 * �������  : ��
 * 
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/


/*****************************************************************************
 * �� �� ��  : BSP_INT_UnLock
 *
 * ��������  : ���ж�
 *
 * �������  : BSP_S32 ulLocKKey  �ж����ţ�ǰһ��BSP_INT_Lock�ķ���ֵ
 * 
 * �������  : ��
 *
 * �� �� ֵ  : �ж�����
 *
 * �޸ļ�¼  : 2009��3��5��   zhanghailun  creat
 *****************************************************************************/


#ifdef __cplusplus
}
#endif

#endif /* end #define _BSP_VIC_H_*/
