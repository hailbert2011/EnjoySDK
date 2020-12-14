//
//  DESTool.h
//  testDES
//
//  Created by apple on 16/9/11.
//  Copyright © 2016年 apple. All rights reserved.
//
 
#import <Foundation/Foundation.h>
 
@interface DESTool : NSObject
 
+ (NSData *)DESEncrypt:(NSData *)data WithKey:(NSString *)key;
 
+ (NSData *)DESDecrypt:(NSData *)data WithKey:(NSString *)key;
 
@end
