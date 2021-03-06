//
//  ESUtils.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESUtils : NSObject

/**
 *  获取Xcode大版本
 *
 *  @return
 */
+ (NSInteger)XcodePreVsersion;

/**
 *  是否是Xcode7或者之后
 *
 *  @return 
 */
+ (BOOL)isXcode7AndLater;

@end
