//
//  ESPair.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESPair : NSObject
@property (nonatomic) id first;
@property (nonatomic) id second;
+ (instancetype) createWithFirst:(id)first second:(id)second;
@end
