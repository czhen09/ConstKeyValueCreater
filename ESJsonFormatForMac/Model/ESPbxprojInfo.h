//
//  ESPbxprojInfo.h
//  ESJsonFormat
//
//  Change by ZX on 17/5/17
//  Copyright (c) 2015年 EnjoySR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESPbxprojInfo : NSObject
@property (nonatomic, copy, readonly) NSString *classPrefix;
@property (nonatomic, copy, readonly) NSString *organizationName;
@property (nonatomic, copy, readonly) NSString *productName;

+(instancetype)shareInstance;
-(void)setParamsWithPath:(NSString *)path;
@end
