//
//  ESPair.m
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import "ESPair.h"

@implementation ESPair

+(instancetype)createWithFirst:(id)first second:(id)second{
    ESPair *pair = [[ESPair alloc] init];
    pair.first = first;
    pair.second = second;
    return pair;
}
@end
