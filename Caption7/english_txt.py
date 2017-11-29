#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Wed Nov 22 20:54:20 2017

@author: glz
"""
import requests
mdict={}
data=requests.get('http://www.xuetangx.com/asset-v1:TsinghuaX+30240233X_2015_T2+sp+type@asset+block/7-3.txt').text
for i in data:
    i=i.lower()
    if mdict.get(i)==None:
        mdict[i]=1
    else:
        mdict[i]+=1
print(sorted(mdict.items(), key=lambda d:d[1],reverse=True))