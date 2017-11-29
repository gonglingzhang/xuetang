#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Wed Nov 22 22:24:09 2017

@author: glz
"""
import requests
data = requests.get('http://www.xuetangx.com/asset-v1:TsinghuaX+30240233X_2015_T2+sp+type@asset+block/7-2.txt').text.split('\n')
list1 = []
for i in data:
    list1.append(i.split(' ')[0])
print(list1)
print(len(set(list1)))
