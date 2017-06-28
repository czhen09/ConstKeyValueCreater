//
//  ESJsonFormatSetting.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESJsonFormatSetting : NSObject

+ (ESJsonFormatSetting *)defaultSetting;

@property BOOL useGeneric;
@property BOOL impOjbClassInArray;
@property BOOL outputToFiles;
@property BOOL uppercaseKeyWordForId;

@end
