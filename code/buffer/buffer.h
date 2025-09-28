// 当多个源文件（.cpp）通过 #include "Buffer.h"包含同一个头文件时
// 如果头文件没有保护，其内容会被重复展开到每个源文件中。这会导致重复定义和编译失败
#ifndef BUFFER_H   // 如果没有定义BUFFER_H宏
#define BUFFER_H   // 定义
// #pragma once    // 替代 #ifndef/#define（C++17）

#include <cstring>
#include <iostream>
#include <unistd.h>  // write, read
#indlude <sys/uio.h> // readv
#include <vector>
#include <atomic>
#include <assert.h>

class Buffer{
public:
    Buffer(int initBuffSize = 1024);
    ~Buffer() = defalt;

    // 容量查询
    size_t WritableBytes() const;       // 可写空间大小
    size_t ReadableBytes() const;       // 可读空间大小
    size_t PrependableBytes() const;    // 可复用预留空间大小

    // 数据读取
    
};



#endif             // 结束条件编译