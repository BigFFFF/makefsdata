/*
 * Created by A on 2025/8/21.
 */

#ifndef LWIP_ARCH_CC_H
#define LWIP_ARCH_CC_H

#define LWIP_RAND() ((u32_t)rand())
#define PACK_STRUCT_BEGIN __pragma(pack(push, 1))
#define PACK_STRUCT_END __pragma(pack(pop))

#pragma warning(disable:4996) // 允许使用strcpy等不带_s后缀的函数
#define snprintf _snprintf

#endif