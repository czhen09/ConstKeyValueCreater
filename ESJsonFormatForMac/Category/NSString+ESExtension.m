//
//  NSString+ESExtension.m
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import "NSString+ESExtension.h"

@implementation NSString (ESExtension)

- (NSString *)substringWithStartStr:(NSString *)start endStr:(NSString *)endStr{
    NSString *resultStr = nil;
    NSRange range;
    NSRange tempRange = [self rangeOfString:start];
    if (tempRange.location !=NSNotFound) {
        range.location = tempRange.location+tempRange.length;
        tempRange = [self rangeOfString:endStr];
        if (tempRange.location!=NSNotFound) {
            range.length = tempRange.location-range.location;
            return [self substringWithRange:range];
        }
    }
    return resultStr;
}
@end
