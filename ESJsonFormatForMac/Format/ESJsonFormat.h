//
//  ESJsonFormat.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>

@class ESJsonFormat;

static ESJsonFormat *sharedPlugin;
static ESJsonFormat *instance;

@interface ESJsonFormat : NSObject

@property (nonatomic, assign) BOOL isSwift;

+ (instancetype)sharedPlugin;
+ (instancetype)instance;
- (id)initWithBundle:(NSBundle *)plugin;
@property (nonatomic, strong, readonly) NSBundle* bundle;
@end
