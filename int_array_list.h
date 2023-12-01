//
// Created by qiuzhenxuan on 2023/11/27.
//

#ifndef CPPARRAYLIST__INT_ARRAY_LIST_H_
#define CPPARRAYLIST__INT_ARRAY_LIST_H_

#include <algorithm>
#include<iostream>

class int_array_list {
public:
  //默认构造函数
  int_array_list(int size)
  {
      this->size=size;
      arr=new int[size]{0};
  }

  //返回数组元素数量
  int get_size()
  {
      len=sizeof(this->arr)/sizeof(int);
      return len;
  }

  //向数组尾添加元素
  void add(int value)
  {
      int temp=size;
      size*=2;
      int*a=new int[size];
      delete[]arr;
      this->arr=a;
      arr[temp+1]=value;

  }

  //移除数组中指定位置的元素，并将后面的元素向前移动
  void removeAt(int index)
  {
      for (int i = index; i <index-1 ; ++i)
      {
        arr[i]=arr[i+1];
      }
  }

  //删除第一个出现的指定元素（如果存在），并将后面的元素向前移动
  void remove(int value)
  {
      for (int i = 0; i <len ; ++i)
      {
        if(arr[i]==value)
        {
            for (int j = i; j <i-1 ; ++j)
            {
                arr[j]=arr[j+1];
            }
            break;
        }
      }
  }

  //返回数组中指定位置的元素
  int get(int index)
  {
      return arr[index];
  }
private:
  int*arr;
  int len;
  int size;
};

#endif // CPPARRAYLIST__INT_ARRAY_LIST_H_
