
/*****************************************************************************

 Date: 2013/01/23
 Revision: 1.0
 Author: hanbiao
 *****************************************************************************/

/*
 * This software program is licensed subject to the GNU General Public License
 * 

 * (C) Copyright 2013 Wits and Merrii
 * All Rights Reserved
 */


/* file macaddr.h
   brief This file contains all function implementations for the sn7325 in linux

*/


#ifndef __MACADDR_H_
#define __MACADDR_H_

//hanbiao
#define FILE_LENGTH             (18)
#define FILE_PATH  "/data/ethmac.info"




#ifdef __cplusplus
extern "C" {
#endif

// 在文件中得到MAC地址
int get_macaddr_info(const char * path, char * tmp);

// 设置MAC地址到文件中
int set_macaddr_info(const char * path, char * tmp);

// 字符串附加
char   *mystrcat(char   *   dest,   const   char   *   src);

// 字符串转换
int mysnprintf(char *str, size_t size, const char *format, char value);

#ifdef __cplusplus
}
#endif


#endif /* ifndef __DM2016_H_ */
